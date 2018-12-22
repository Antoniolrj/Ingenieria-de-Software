#include "funciones.h"
#include "macros.h"
#include <string.h>
#include <fstream>

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
   	std::cout << BBLUE;
	std::cout << "Programa principial | Opciones del menu";
	std::cout << RESET;
	
	LUGAR(posicion++,10);
	std::cout << "[1] Iniciar sesion";
	
	LUGAR(posicion++,10);
	std::cout << "[2] Registrarse";
	
	LUGAR(posicion++,10);
	std::cout << GREEN << "[0] Salir";
	
	LUGAR(posicion++,20);
	std::cout << IYELLOW;
	std::cout << "Opcion: ";
	std::cout << RESET;
	
	std::cin >> opcion;
	std::cin.ignore();
	
	return opcion;
}

bool inicioSesion(Profesor &profesor){
	struct profesor aux;
	char nick[50];
	char password[50];
	
	std::cout << "Introduzca su nombre de usuario: ";
	std::cin >> nick;
	
	std::cout << "Introduzca la password: ";
	std::cin >> password;
	
	std::fstream fichero("profesores.bin",std::ios::app | std::ios::in | std::ios::out | std::ios::binary);
	
	if(!fichero){
		std::cout << "Error: no se pudo establecer la conexion con la base de datos" << std::endl;
		
		return false;
	}
	
	fichero.seekg(0);
	
	fichero.read((char *)&aux,sizeof(aux));
	
	while(!fichero.eof()){
		if(strcmp(nick,aux.nick)==0 and strcmp(password,aux.password)==0){
			std::cout << "Acceso permitido" << std::endl;
			std::cout << "Pulse cualquier tecla para continuar" << std::endl;
			
			std::cin.ignore();
			std::cin.ignore();
			
			profesor.setAgenda(aux.agenda);
			profesor.setCoordinador(aux.coordinador);
			
			fichero.close();
			
			return true;
		}
		
		fichero.read((char *)&aux,sizeof(aux));
	}
	
	std::cout << "Acceso denegado" << std::endl;
	std::cout << "Pulse cualquier tecla para continuar" << std::endl;
	
	std::cin.ignore();
	std::cin.ignore();
	
	fichero.close();
	
	return false;
}

bool registro(){
	struct profesor aux;
	int coor;
	
	std::cout << "Introduzca su nombre de usuario: ";
	std::cin >> aux.nick;
	
	std::cout << "Introduzca la password: ";
	std::cin >> aux.password;
	
	std::cout << "Introduzca su clase: ";
	std::cin >> aux.agenda;
	
	std::cout << "Es coordinador? (0=no 1=si): ";
	std::cin >> coor;
	
	if(coor==0){
		aux.coordinador=false;
	}
	
	if(coor==1){
		aux.coordinador=true;
	}
	
	std::fstream fichero("profesores.bin",std::ios::app | std::ios::in | std::ios::out | std::ios::binary);
	
	if(!fichero){
		std::cout << "Error: no se pudo establecer la conexion con la base de datos" << std::endl;
		std::cin.ignore();
		std::cin.ignore();
		
		return false;
	}
	
	fichero.seekp(std::ios_base::end);
	
	fichero.write((char *)&aux,sizeof(aux));
	
	fichero.close();
	
	std::cout << "Registro completado" << std::endl;
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
   	std::cout << BBLUE;
	std::cout << "Programa principial | Opciones del menu";
	std::cout << RESET;
	
	LUGAR(posicion++,10);
	std::cout << "[1] Crear clase";
	
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
	std::cout << IYELLOW;
	std::cout << "Opcion: ";
	std::cout << RESET;
	
	std::cin >> opcion;
	std::cin.ignore();
	
	return opcion;
}

void buscarAlumnos(Agenda &agenda){
	if(agenda.getAgenda().empty()){
		std::cout << "Error: la clase esta vacia" << std::endl;
		std::cin.ignore();
	}
	
	else{
		int busqueda;
		std::string dni;
		int equipo;
		std::vector <Alumno> alumnos;
	
		std::cout << "Especifique como desea buscar a los alumnos :" << std::endl;
		std::cout << "[1] Por DNI" << std::endl;
		std::cout << "[2] Por grupo" << std::endl;
				
		std::cin >> busqueda;
				
		switch(busqueda){
			case 1:
				std::cout << "Introduzca el DNI del alumno a buscar: ";
				std::cin >> dni;
				
				if(dni==""){
					std::cout << "Error: no se ha introducido ningun DNI" << std::endl;
				}
				
				else{
					if(!agenda.existeAlumno(dni)){
						std::cout << "Error: no existe ningun alumno con el DNI especificado" << std::endl;
					}
					
					else{
						agenda.buscarAlumnoDNI(dni);
					}
				}
						
				break;
					
			case 2:
				std::cout << "Introduzca el equipo del alumno a buscar: ";
				std::cin >> equipo;
				
				if(equipo<=0){
					std::cout << "Error: no se ha introducido ningun equipo valido" << std::endl;
				}
				
				else{
					if(!agenda.existeAlumno(equipo)){
						std::cout << "Error: no existe el equipo especificado" << std::endl;
					}
					
					else{
						alumnos=agenda.buscarAlumnoEquipo(equipo);
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

void insertarAlumno(Agenda &agenda){
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
		
	std::cout << "Introduzca los datos del alumno: " << std::endl;
	std::cout << "DNI: ";
	std::cin >> dni;
	
	if(dni==""){
		std::cout << "Error: no se ha introducido ningun DNI" << std::endl;
	}
	
	else{
		if(agenda.existeAlumno(dni)){
			std::cout << "Error: ya existe un alumno con el DNI especificado" << std::endl;
		}
		
		else{
			std::cout << "Nombre: ";
			std::cin >> nombre;
			std::cout << "Apellidos: ";
			std::cin >> apellidos;
			std::cout << "E-mail: ";
			std::cin >> email;
			std::cout << "Telefono: ";
			std::cin >> tlf;
			std::cout << "Direccion: ";
			std::cin >> dir;
			std::cout << "Curso: ";
			std::cin >> curso;
			std::cout << "Fecha de nacimiento: ";
			std::cin >> fecnac;
			std::cout << "Equipo: ";
			std::cin >> equipo;
			std::cout << "Lider (1=si): ";
			std::cin >> numlider;
	
			if(numlider==1){
				lider=true;
			}
	
			else{
				lider=false;
			}
	
			Alumno alumno(dni,nombre,apellidos,email,tlf,dir,curso,fecnac,equipo,lider);
	
			agenda.nuevoAlumno(alumno);
		}
	}
}

void borrarAlumno(Agenda &agenda){
	std::string dni;
	
	std::cout << "Introduzca el DNI del alumno a borrar: ";
	std::cin >> dni;
	
	if(dni==""){
		std::cout << "Error: no se ha introducido ningun DNI" << std::endl;
	}
	
	else{
		if(!agenda.existeAlumno(dni)){
			std::cout << "Error: no existe el alumno especificado" << std::endl;
		}
		
		else{
			agenda.eliminarAlumno(dni);
		}
	}
}
