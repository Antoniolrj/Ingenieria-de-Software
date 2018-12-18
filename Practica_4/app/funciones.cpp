#include "funciones.h"
#include "macros.h"
#include <iostream>

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

void inicioSesion(){

}

void registro(){

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
			
			agenda.buscarAlumnoDNI(dni);
						
			break;
					
		case 2:
			std::cout << "Introduzca el equipo del alumno a buscar: ";
			std::cin >> equipo;
			
			alumnos=agenda.buscarAlumnoEquipo(equipo);
						
			break;
					
		default:
			LUGAR(25,25);
			std::cout << INVERSE << "Opción incorrecta " << RESET << RED << " --> " << busqueda << RESET << std::endl;
						
			break;
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

void borrarAlumno(Agenda &agenda){
	std::string dni;
	
	std::cout << "Introduzca el DNI del alumno a borrar: ";
	std::cin >> dni;
	
	agenda.eliminarAlumno(dni);
}
