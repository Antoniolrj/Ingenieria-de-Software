#ifndef FUNCIONES_H
#define FUNCIONES_H

#include "profesor.h"
#include "macros.h"

int menuPrincipal();

bool inicioSesion(Profesor &profesor);

bool registro();

int menuSesion();

inline void guardarClase(Profesor &profesor,Agenda &agenda){
	if(profesor.getAgenda()==""){
		std::cout << BRED << "Error: no tiene ninguna clase asignada" << RESET << std::endl;
		std::cin.ignore();
	}
	
	else if(agenda.getAgenda().empty()){
		std::cout << BRED << "Error: la clase esta vacia" << RESET << std::endl;
		std::cin.ignore();
	}
	
	else{
		if(!profesor.guardarClase(profesor.getAgenda(),agenda)){
			std::cout << BRED << "Error: no se pudo guardar la clase" << RESET << std::endl;
			std::cin.ignore();
		}
		
		else{
			std::cout << CYAN << "Clase guardada correctamente" << RESET << std::endl;
			std::cin.ignore();
		}
	}
}

inline void mostrarClase(Profesor &profesor,Agenda &agenda){
	if(profesor.getAgenda()==""){
		std::cout << BRED << "Error: no tiene ninguna clase asignada" << RESET << std::endl;
		std::cin.ignore();
	}
	
	else if(agenda.getAgenda().empty()){
		std::cout << BRED << "Error: la clase esta vacia" << RESET << std::endl;
		std::cin.ignore();
	}
	
	else{
		std::cout << IYELLOW << "Clase: " << profesor.getAgenda() << RESET << std::endl << std::endl;
		agenda.listarAlumnos();
		std::cin.ignore();
	}
}

inline void borrarClase(Profesor &profesor,Agenda &agenda){
	if(profesor.getAgenda()==""){
		std::cout << BRED << "Error: no tiene ninguna clase asignada" << RESET << std::endl;
		std::cin.ignore();
	}
	
	else if(agenda.getAgenda().empty()){
		std::cout << BRED << "Error: la clase esta vacia" << RESET << std::endl;
		std::cin.ignore();
	}
	
	else{
		agenda.getAgenda().clear();
		agenda.getAgenda().resize(0);
		
		std::cout << CYAN << "Clase borrada correctamente" << RESET << std::endl;
		std::cin.ignore();
	}
}

inline void asignarClase(Profesor &profesor,Agenda &agenda){
	std::string clase;
	
	std::cout << IYELLOW << "Introduzca el nombre de la clase: " << RESET;
	getline(std::cin,clase);
	
	clase+=".bin";
	
	if(profesor.getAgenda()!=clase and profesor.getAgenda()!=""){
		borrarClase(profesor,agenda);
	}
	
	profesor.setAgenda(clase);
	
	std::cout << std::endl << CYAN << "Clase asignada correctamente" << RESET << std::endl;
	std::cin.ignore();
}

inline void cargarClase(Profesor &profesor,Agenda &agenda){
	if(profesor.getAgenda()==""){
		std::cout << BRED << "Error: no tiene ninguna clase asignada" << RESET << std::endl;
		std::cin.ignore();
	}
	
	else{
		borrarClase(profesor,agenda);
		
		if(!profesor.cargarClase(profesor.getAgenda(),agenda)){
			std::cout << BRED << "Error: no se pudo cargar la clase" << RESET << std::endl;
			std::cin.ignore();
		}
		
		else{
			std::cout << CYAN << "Clase cargada correctamente" << RESET << std::endl;
			std::cin.ignore();
		}
	}
}

void buscarAlumnos(Profesor &profesor,Agenda &agenda);

void insertarAlumno(Profesor &profesor,Agenda &agenda);

void modificarAlumno(Profesor &profesor,Agenda &agenda);

void borrarAlumno(Profesor &profesor,Agenda &agenda);

#endif
