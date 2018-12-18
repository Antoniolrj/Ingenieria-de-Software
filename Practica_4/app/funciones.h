#ifndef FUNCIONES_H
#define FUNCIONES_H

#include "profesor.h"

int menuPrincipal();

void inicioSesion();

void registro();

int menuSesion();

inline void crearClase(Profesor &profesor){
	std::string clase;
	
	std::cout << "Introduzca el nombre de la clase: ";
	std::cin >> clase;
	
	profesor.setAgenda(clase);
}

inline void cargarClase(Profesor &profesor,Agenda &agenda){
	std::string nombre_fichero;
	
	std::cout << "Introduzca el nombre del fichero de la clase a cargar: ";
	std::cin >> nombre_fichero;
	
	if(!profesor.cargarClase(nombre_fichero,agenda)){
		std::cout << "Error: no se pudo cargar la clase" << std::endl;
	}
}

inline void guardarClase(Profesor &profesor,Agenda &agenda){
	std::string nombre_fichero;
	
	std::cout << "Introduzca el nombre del fichero de la clase a guardar (si el fichero especificado ya existe se sobreescribira): ";
	std::cin >> nombre_fichero;
	
	if(!profesor.guardarClase(nombre_fichero,agenda)){
		std::cout << "Error: no se pudo guardar la clase" << std::endl;
	}
}

inline void mostrarClase(Agenda &agenda){
	agenda.listarAlumnos();
}

void buscarAlumnos(Agenda &agenda);

void insertarAlumno(Agenda &agenda);

void borrarAlumno(Agenda &agenda);

#endif
