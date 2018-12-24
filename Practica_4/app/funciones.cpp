#include "funciones.h"
#include "macros.h"
#include <string.h>
#include <fstream>
#include <iostream>

struct profesor{
	char nick[50];
	char password[50];
	char agenda[50];
	bool coordinador;
};

int menuPrincipal(){
	int opcion;
	int posicion;
	
	posicion=8;
	
	std::cout << CLEAR_SCREEN;
	
	LUGAR(5,10);
	std::cout << BBLUE << "Programa principial | Opciones del menu" << RESET;
	
	LUGAR(posicion++,10);
	std::cout << "[1] Iniciar sesion";
	
	LUGAR(posicion++,10);
	std::cout << "[2] Registrarse";
	
	LUGAR(posicion++,10);
	std::cout << GREEN << "[0] Salir";
	
	LUGAR(posicion++,20);
	std::cout << IYELLOW << "Opcion: " << RESET;
	
	std::cin >> opcion;
	std::cin.ignore();
	
	return opcion;
}

bool inicioSesion(Profesor &profesor){
	struct profesor aux;
	std::string nick;
	std::string password;
	
	std::cout << IYELLOW << "Introduzca su nombre de usuario: " << RESET;
	getline(std::cin,nick);
	
	std::cout << IYELLOW << "Introduzca la password: " RESET;
	getline(std::cin,password);
	
	std::fstream fichero("profesores.bin",std::ios::app | std::ios::in | std::ios::out | std::ios::binary);
	
	if(!fichero){
		std::cout << BRED << "Error: no se pudo establecer la conexion con la base de datos" << RESET << std::endl;
		
		return false;
	}
	
	fichero.seekg(0);
	
	fichero.read((char *)&aux,sizeof(aux));
	
	while(!fichero.eof()){
		if(strcmp(nick.c_str(),aux.nick)==0 and strcmp(password.c_str(),aux.password)==0){
			std::cout << std::endl << CYAN << "Acceso permitido" << RESET << std::endl;
			std::cin.ignore();
			
			profesor.setAgenda(aux.agenda);
			profesor.setCoordinador(aux.coordinador);
			
			fichero.close();
			
			return true;
		}
		
		fichero.read((char *)&aux,sizeof(aux));
	}
	
	std::cout << std::endl << BRED << "Acceso denegado" << RESET << std::endl;
	std::cin.ignore();
	
	fichero.close();
	
	return false;
}

bool registro(){
	struct profesor aux;
	int coor;
	std::string nick;
	std::string password;
	
	std::cout << IYELLOW << "Introduzca su nombre de usuario: " << RESET;
	getline(std::cin,nick);
	strcpy(aux.nick,nick.c_str());
	
	std::cout << IYELLOW << "Introduzca la password: " << RESET;
	getline(std::cin,password);
	strcpy(aux.password,password.c_str());
	
	strcpy(aux.agenda,"");
	
	std::cout << IYELLOW << "Es coordinador? (1=si   otro valor=no): " << RESET;
	std::cin >> coor;
	
	if(coor==1){
		aux.coordinador=true;
	}
	
	else{
		aux.coordinador=false;
	}
	
	std::fstream fichero("profesores.bin",std::ios::app | std::ios::in | std::ios::out | std::ios::binary);
	
	if(!fichero){
		std::cout << BRED << "Error: no se pudo establecer la conexion con la base de datos" << RESET << std::endl;
		std::cin.ignore();
		std::cin.ignore();
		
		return false;
	}
	
	fichero.seekp(std::ios_base::end);
	
	fichero.write((char *)&aux,sizeof(aux));
	
	fichero.close();
	
	std::cout << std::endl << CYAN << "Registro completado" << RESET << std::endl;
	std::cin.ignore();
	std::cin.ignore();
	
	return true;
}

int menuSesion(){
	int opcion;
	int posicion;
	
	posicion=8;
	
	std::cout << CLEAR_SCREEN;
	
	LUGAR(5,10);
	std::cout << BBLUE << "Programa principial | Opciones del menu" << RESET;
	
	LUGAR(posicion++,10);
	std::cout << "[1] Asignar clase";
	
	LUGAR(posicion++,10);
	std::cout << "[2] Cargar clase";
	
	LUGAR(posicion++,10);
	std::cout << "[3] Guardar clase";
	
	LUGAR(posicion++,10);
	std::cout << "[4] Mostrar clase";
	
	LUGAR(posicion++,10);
	std::cout << "[5] Borrar clase";
	
	LUGAR(posicion++,10);
	std::cout << "[6] Buscar alumno";
	
	LUGAR(posicion++,10);
	std::cout << "[7] Insertar alumno";
	
	LUGAR(posicion++,10);
	std::cout << "[8] Modificar alumno";
	
	LUGAR(posicion++,10);
	std::cout << "[9] Borrar alumno";
	
	LUGAR(posicion++,10);
	std::cout << GREEN << "[0] Salir";
	
	LUGAR(posicion++,20);
	std::cout << IYELLOW << "Opcion: " << RESET;
	
	std::cin >> opcion;
	std::cin.ignore();
	
	return opcion;
}

void buscarAlumnos(Profesor &profesor,Agenda &agenda){
	if(profesor.getAgenda()==""){
		std::cout << BRED << "Error: no tiene ninguna clase asignada" << RESET << std::endl;
		std::cin.ignore();
	}
	
	else if(agenda.getAgenda().empty()){
		std::cout << BRED << "Error: la clase esta vacia" << RESET << std::endl;
		std::cin.ignore();
	}
	
	else{
		int busqueda;
		std::string dni;
		int equipo;
		std::vector <Alumno> alumnos;
		std::string nombre;
		std::string apellidos;
	
		std::cout << IYELLOW << "Especifique como desea buscar a los alumnos :" << RESET << std::endl;
		std::cout << "[1] Por DNI" << std::endl;
		std::cout << "[2] Por grupo" << std::endl;
		std::cout << "[3] Por nombre" << std::endl;
		std::cout << "[4] Por apellidos" << std::endl;
		std::cout << "Opcion: ";
		std::cin >> busqueda;
		std::cout << std::endl;
				
		switch(busqueda){
			case 1:
				std::cout << IYELLOW << "Introduzca el DNI del alumno a buscar: " << RESET;
				std::cin.ignore();
				getline(std::cin,dni);
				
				if(dni==""){
					std::cout << BRED << "Error: no se ha introducido ningun DNI" << RESET << std::endl;
				}
				
				else{
					if(!agenda.existeAlumno(dni)){
						std::cout << BRED << "Error: no existe ningun alumno con el DNI especificado" << RESET << std::endl;
					}
					
					else{
						agenda.buscarAlumnoDNI(dni).listarAlumno();
						std::cin.ignore();
					}
				}
						
				break;
					
			case 2:
				std::cout << IYELLOW << "Introduzca el equipo del alumno a buscar: " << RESET;
				std::cin >> equipo;
				
				if(equipo<=0){
					std::cout << BRED << "Error: no se ha introducido ningun equipo valido" << RESET << std::endl;
				}
				
				else{
					if(!agenda.existeAlumno(equipo)){
						std::cout << BRED << "Error: no existe el equipo especificado" << RESET << std::endl;
					}
					
					else{
						alumnos=agenda.buscarAlumnoEquipo(equipo);
						
						for(unsigned int i=0;i<alumnos.size();i++){
							alumnos[i].listarAlumno();
							std::cout << std::endl;
						}
					}
				}
						
				break;
				
			case 3:
				std::cout << IYELLOW << "Introduzca el nombre del alumno a buscar: " << RESET;
				std::cin.ignore();
				getline(std::cin,nombre);
				
				if(nombre==""){
					std::cout << BRED << "Error: no se ha introducido ningun nombre" << RESET << std::endl;
					std::cin.ignore();
				}
				
				else{
					if(!agenda.existeAlumnoNombre(nombre)){
						std::cout << BRED << "Error: no existe ningun alumno con el nombre especificado" << RESET << std::endl;
						std::cin.ignore();
					}
					
					else{
						alumnos=agenda.buscarAlumnoNombre(nombre);
						
						for(unsigned int i=0;i<alumnos.size();i++){
							alumnos[i].listarAlumno();
							std::cout << std::endl;
						}
						
						std::cin.ignore();
					}
				}
						
				break;
			
			case 4:
				std::cout << IYELLOW << "Introduzca el apellidos del alumno a buscar: " << RESET;
				std::cin.ignore();
				getline(std::cin,nombre);
				
				if(apellidos==""){
					std::cout << BRED << "Error: no se ha introducido ningun apellido" << RESET << std::endl;
					std::cin.ignore();
				}
				
				else{
					if(!agenda.existeAlumnoApellidos(apellidos)){
						std::cout << BRED << "Error: no existe ningun alumno con los apellidos especificados" << RESET << std::endl;
						std::cin.ignore();
					}
					
					else{
						alumnos=agenda.buscarAlumnoApellidos(apellidos);
						
						for(unsigned int i=0;i<alumnos.size();i++){
							alumnos[i].listarAlumno();
							std::cout << std::endl;
						}
						
						std::cin.ignore();
					}
				}
						
				break;
					
			default:
				LUGAR(25,25);
				std::cout << INVERSE << "Opción incorrecta " << RESET << RED << " --> " << busqueda << RESET << std::endl;
						
				break;
		}
	}
}

void insertarAlumno(Profesor &profesor,Agenda &agenda){
	if(profesor.getAgenda()==""){
		std::cout << BRED << "Error: no tiene ninguna clase asignada" << RESET << std::endl;
		std::cin.ignore();
	}
	
	else{
		std::string dni;
		std::string nombre;
		std::string apellidos;
		std::string email;
		std::string tlf;
		std::string dir;
		int curso;
		std::string fecnac;
		int equipo;
		int numlider;
		bool lider;
		
		std::cout << IYELLOW << "Introduzca los datos del alumno: " << RESET << std::endl;
		std::cout << "DNI: ";
		getline(std::cin,dni);
	
		if(dni==""){
			std::cout << BRED << "Error: no se ha introducido ningun DNI" << RESET << std::endl;
		}
	
		else{
			if(agenda.existeAlumno(dni)){
				std::cout << BRED << "Error: ya existe un alumno con el DNI especificado" << RESET << std::endl;
			}
		
			else{
				std::cout << "Nombre: ";
				getline(std::cin,nombre);
			
				std::cout << "Apellidos: ";
				getline(std::cin,apellidos);
			
				std::cout << "E-mail: ";
				getline(std::cin,email);
			
				std::cout << "Telefono: ";
				getline(std::cin,tlf);
			
				std::cout << "Direccion: ";
				getline(std::cin,dir);
			
				std::cout << "Curso: ";
				std::cin >> curso;
				std::cin.ignore();
			
				std::cout << "Fecha de nacimiento: ";
				getline(std::cin,fecnac);
			
				std::cout << "Equipo: ";
				std::cin >> equipo;
			
				std::cout << "Lider (1=si   otro valor=no): ";
				std::cin >> numlider;
	
				if(numlider==1){
					lider=true;
				}
	
				else{
					lider=false;
				}
	
				Alumno alumno(dni,nombre,apellidos,email,tlf,dir,curso,fecnac,equipo,lider);
	
				agenda.nuevoAlumno(alumno);
			
				std::cout << CYAN << "Alumno insertado correctamente" << RESET << std::endl;
			}
		}
	}
}

void modificarAlumno(Profesor &profesor,Agenda &agenda){
	if(profesor.getAgenda()==""){
		std::cout << BRED << "Error: no tiene ninguna clase asignada" << RESET << std::endl;
		std::cin.ignore();
	}
	
	else if(agenda.getAgenda().empty()){
		std::cout << BRED << "Error: la clase esta vacia" << RESET << std::endl;
		std::cin.ignore();
	}
	
	else{
		std::string old_dni;
		std::string dni;
		std::string nombre;
		std::string apellidos;
		std::string email;
		std::string tlf;
		std::string dir;
		int curso;
		std::string fecnac;
		int equipo;
		int numlider;
		bool lider;
	
		std::cout << IYELLOW << "Introduzca el DNI del alumno a modificar: " << RESET;
		getline(std::cin,old_dni);
		
		if(old_dni==""){
			std::cout << BRED << "Error: no se ha introducido ningun DNI" << RESET << std::endl;
			std::cin.ignore();
		}
		
		else{
			if(!agenda.existeAlumno(old_dni)){
				std::cout << BRED << "Error: no existe el alumno especificado" << RESET << std::endl;
				std::cin.ignore();
			}
			
			else{
				std::cout << "DNI: ";
				getline(std::cin,dni);
				
				std::cout << "Nombre: ";
				getline(std::cin,nombre);
			
				std::cout << "Apellidos: ";
				getline(std::cin,apellidos);
			
				std::cout << "E-mail: ";
				getline(std::cin,email);
			
				std::cout << "Telefono: ";
				getline(std::cin,tlf);
			
				std::cout << "Direccion: ";
				getline(std::cin,dir);
			
				std::cout << "Curso: ";
				std::cin >> curso;
				std::cin.ignore();
			
				std::cout << "Fecha de nacimiento: ";
				getline(std::cin,fecnac);
			
				std::cout << "Equipo: ";
				std::cin >> equipo;
			
				std::cout << "Lider (1=si   otro valor=no): ";
				std::cin >> numlider;
	
				if(numlider==1){
					lider=true;
				}
	
				else{
					lider=false;
				}
	
				Alumno alumno(dni,nombre,apellidos,email,tlf,dir,curso,fecnac,equipo,lider);
				
				agenda.actuAlumno(old_dni,alumno);
				
				std::cout << CYAN << "Alumno modificado correctamente" << RESET << std::endl;
			}
		}
	}
}

void borrarAlumno(Profesor &profesor,Agenda &agenda){
	if(profesor.getAgenda()==""){
		std::cout << BRED << "Error: no tiene ninguna clase asignada" << RESET << std::endl;
		std::cin.ignore();
	}
	
	else if(agenda.getAgenda().empty()){
		std::cout << BRED << "Error: la clase esta vacia" << RESET << std::endl;
		std::cin.ignore();
	}
	
	else{
		std::string dni;
	
		std::cout << IYELLOW << "Introduzca el DNI del alumno a borrar: " << RESET;
		getline(std::cin,dni);
	
		if(dni==""){
			std::cout << BRED << "Error: no se ha introducido ningun DNI" << RESET << std::endl;
		}
	
		else{
			if(!agenda.existeAlumno(dni)){
				std::cout << BRED << "Error: no existe el alumno especificado" << RESET << std::endl;
			}
		
			else{
				agenda.eliminarAlumno(dni);
			
				std::cout << CYAN << "Alumno borrado correctamente" << RESET << std::endl;
			}
		}
	}
}
