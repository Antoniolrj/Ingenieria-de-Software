#include "agenda.h"
#include <iostream>

void Agenda::listarAlumnos(){
	for(int i=0;i<agenda_.size();i++){
		agenda_[i].listarAlumno();
		
		std::cout << std::endl << std::endl;
	}
}

Alumno Agenda::buscarAlumnoDNI(std::string &dni){
	for(int i=0;i<agenda_.size();i++){
		if(agenda_[i].getDNI()==dni){
			return agenda_[i];
		}
	}
}

std::vector <Alumno> Agenda::buscarAlumnoEquipo(int equipo){
	std::vector <Alumno> alumnos;
	
	for(int i=0;i<agenda_.size();i++){
		if(agenda_[i].getEquipo()==equipo){
			alumnos.push_back(agenda_[i]);
		}
	}
	
	return alumnos;
}

void Agenda::actuAlumno(const std::string &dni,Alumno &a){
	for(int i=0;i<agenda_.size();i++){
		if(agenda_[i].getDNI()==dni){
			agenda_[i]=a;
		}
	}
}

void Agenda::eliminarAlumno(const std::string &dni){
	for(int i=0;i<agenda_.size();i++){
		if(agenda_[i].getDNI()==dni){
			agenda_.erase(agenda_.begin()+i);
		}
	}
}
