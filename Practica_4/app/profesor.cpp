#include "profesor.h"
#include <fstream>
#include <iostream>

bool Profesor::cargarClase(std::string nombre_fichero,Agenda &agenda){
	std::fstream f;
	std::string dni;
	std::string nombre;
	std::string apellidos;
	std::string email;
	std::string tlf;
	std::string dir;
	int curso;
	std::string fecnac;
	int equipo;
	std::string lid;
	bool lider;
	std::vector <Alumno> alumnos;

	f.open(nombre_fichero.c_str(), std::ios::in | std::ios::binary);
	
	if(!f){
		return false;
	}

	while(f >> dni){
		f >> nombre >> apellidos >> email >> tlf >> dir >> curso >> fecnac >> equipo >> lid;
		
		if(lid=="si"){
			lider=true;
		}
		
		else{
			lider=false;
		}
		
		Alumno a(dni,nombre,apellidos,email,tlf,dir,curso,fecnac,equipo,lider);
		
		alumnos.push_back(a);
	}
	
	agenda.setAgenda(alumnos);

	f.close();
	
	return true;
}

bool Profesor::guardarClase(std::string nombre_fichero,Agenda &agenda){
	std::fstream f;

	f.open(nombre_fichero.c_str(), std::ios::out | std::ios::binary);
	
	if(!f){
		return false;
	}

	for (int i=0;i<agenda.getAgenda().size();i++) {
		f << agenda.getAgenda()[i].getDNI() << agenda.getAgenda()[i].getNombre() << agenda.getAgenda()[i].getApellidos() << agenda.getAgenda()[i].getEmail() << agenda.getAgenda()[i].getTlf() << agenda.getAgenda()[i].getDir() << agenda.getAgenda()[i].getCurso() << agenda.getAgenda()[i].getFecnac() << agenda.getAgenda()[i].getEquipo();
		
		if(agenda.getAgenda()[i].getLider()){
			f << "si" << std::endl;
		}
		
		else{
			f << "no" << std::endl;
		}
	}

	f.close();
	
	return true;
}
