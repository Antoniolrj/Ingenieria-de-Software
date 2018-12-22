#ifndef FUNCIONES_H
#define FUNCIONES_H

#include "profesor.h"

int menuPrincipal();

bool inicioSesion(Profesor &profesor);

bool registro();

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
	
	if(nombre_fichero.size()<4 or nombre_fichero.find(".dat")==std::string::npos){
		std::cout << "Error: no ha introducido un nombre de fichero correcto" << std::endl;
	}
	
	else{
		if(!profesor.cargarClase(nombre_fichero,agenda)){
			std::cout << "Error: no se pudo cargar la clase" << std::endl;
		}
	}
}

inline void guardarClase(Profesor &profesor,Agenda &agenda){
	if(agenda.getAgenda().empty()){
		std::cout << "Error: la clase esta vacia" << std::endl;
		std::cin.ignore();
		
		return;
	}
	
	std::string nombre_fichero;
	
	std::cout << "Introduzca el nombre del fichero de la clase a guardar (si el fichero especificado ya existe se sobreescribira): ";
	std::cin >> nombre_fichero;
	
	if(nombre_fichero.size()<4 or nombre_fichero.find(".dat")==std::string::npos){
		std::cout << "Error: no ha introducido un nombre de fichero correcto" << std::endl;
	}
	else{
		if(!profesor.guardarClase(nombre_fichero,agenda)){
			std::cout << "Error: no se pudo guardar la clase" << std::endl;
		}
	}
}

inline void mostrarClase(Agenda &agenda){
	if(agenda.getAgenda().empty()){
		std::cout << "Error: la clase esta vacia" << std::endl;
		std::cin.ignore();
	}
	
	else{
		agenda.listarAlumnos();
		std::cin.ignore();
	}
}

inline void borrarClase(Agenda &agenda){
	if(agenda.getAgenda().empty()){
		std::cout << "Error: la clase esta vacia" << std::endl;
		std::cin.ignore();
	}
	
	else{
		agenda.getAgenda().clear();
		agenda.getAgenda().resize(0);
		
		std::cout << "Clase borrada" << std::endl;
		std::cin.ignore();
	}
}

void buscarAlumnos(Agenda &agenda);

void insertarAlumno(Agenda &agenda);

void borrarAlumno(Agenda &agenda);

#endif
