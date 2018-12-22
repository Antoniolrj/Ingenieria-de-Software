#include "profesor.h"
#include <fstream>

bool Profesor::cargarClase(std::string nombre_fichero,Agenda &agenda){
	#ifndef NDEBUG
		assert(nombre_fichero.size()>4 and nombre_fichero.find(".dat")!=std::string::npos);
	#endif
	
	Alumno alumno;
	
	std::fstream fichero(nombre_fichero.c_str(),std::ios::app | std::ios::in | std::ios::out | std::ios::binary);
	
	if(!fichero){
		std::cout << "Error: no se pudo establecer la conexion con la base de datos" << std::endl;
		
		return false;
	}
	
	fichero.seekg(0);
	
	agenda.getAgenda().resize(0);
	
	do{
		fichero.read((char *)&alumno,sizeof(alumno));
		
		agenda.getAgenda().push_back(alumno);
	}while(!fichero.eof());
	
	std::cout << "Clase cargada" << std::endl;
	std::cout << "Pulse cualquier tecla para continuar" << std::endl;
	
	std::cin.ignore();
	std::cin.ignore();
	
	fichero.close();
	
	return true;
}

bool Profesor::guardarClase(std::string nombre_fichero,Agenda &agenda){
	#ifndef NDEBUG
		assert(nombre_fichero.size()>4 and nombre_fichero.find(".dat")!=std::string::npos and !agenda.getAgenda().empty());
	#endif
	
	std::fstream fichero("profesores.bin",std::ios::app | std::ios::in | std::ios::out | std::ios::binary);
	
	if(!fichero){
		std::cout << "Error: no se pudo establecer la conexion con la base de datos" << std::endl;
		std::cin.ignore();
		std::cin.ignore();
		
		return false;
	}
	
	fichero.seekp(0);
	
	fichero.write((char *)&agenda.getAgenda(),sizeof(agenda.getAgenda()));
	
	fichero.close();
	
	std::cout << "Registro completado" << std::endl;
	std::cin.ignore();
	std::cin.ignore();
	
	return true;
}
