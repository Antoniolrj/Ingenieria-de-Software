#include "profesor.h"
#include <fstream>
#include <string.h>

struct alumno{
	char dni[50];
	char nombre[50];
	char apellidos[50];
	char email[50];
	char tlf[50];
	char dir[50];
	int curso;
	char fecnac[50];
	int equipo;
	int lider;
	bool lid;
};

bool Profesor::cargarClase(std::string nombre_fichero,Agenda &agenda){
	#ifndef NDEBUG
		assert(nombre_fichero.size()>4 and nombre_fichero.find(".bin")!=std::string::npos);
	#endif
	
	struct alumno aux;
	std::vector <Alumno> alumnos;
	bool lider;
	
	std::fstream fichero(nombre_fichero.c_str(),std::ios::in | std::ios::binary);
	
	if(!fichero.is_open()){
		return false;
	}
	
	fichero.seekg(0);
	
	while(!fichero.eof()){
		fichero.read((char *)&aux,sizeof(aux));
		
		if(aux.lider==1){
			lider=true;
		}
		
		else{
			lider=false;
		}
		
		Alumno alumno(aux.dni,aux.nombre,aux.apellidos,aux.email,aux.tlf,aux.dir,aux.curso,aux.fecnac,aux.equipo,lider);
		
		alumnos.push_back(alumno);
	}
	
	alumnos.erase(alumnos.end());
	
	agenda.setAgenda(alumnos);
	
	fichero.close();
	
	return true;
}

bool Profesor::guardarClase(std::string nombre_fichero,Agenda &agenda){
	#ifndef NDEBUG
		assert(nombre_fichero.size()>4 and nombre_fichero.find(".bin")!=std::string::npos and !agenda.getAgenda().empty());
	#endif
	
	std::fstream fichero(nombre_fichero.c_str(),std::ios::out | std::ios::binary);
	struct alumno aux;
	
	if(!fichero.is_open()){
		return false;
	}
	
	fichero.seekp(0);
	
	for(unsigned int i=0;i<agenda.getAgenda().size();i++){
		strcpy(aux.dni,agenda.getAgenda()[i].getDNI().c_str());
		strcpy(aux.nombre,agenda.getAgenda()[i].getNombre().c_str());
		strcpy(aux.apellidos,agenda.getAgenda()[i].getApellidos().c_str());
		strcpy(aux.email,agenda.getAgenda()[i].getEmail().c_str());
		strcpy(aux.tlf,agenda.getAgenda()[i].getTlf().c_str());
		strcpy(aux.dir,agenda.getAgenda()[i].getDir().c_str());
		aux.curso=agenda.getAgenda()[i].getCurso();
		strcpy(aux.fecnac,agenda.getAgenda()[i].getFecnac().c_str());
		aux.equipo=agenda.getAgenda()[i].getEquipo();
		aux.lid=agenda.getAgenda()[i].getLider();
		
		fichero.write((char *)&aux,sizeof(aux));
	}
	
	fichero.close();
	
	return true;
}
