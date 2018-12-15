#include "agenda.h"
#include <iostream>

void Agenda::listarAlumnos(){
	for(int i=0;i<agenda_.size();i++){
		agenda_[i].listarAlumno();
		
		std::cout << std::endl << std::endl;
	}
}

void Agenda::nuevoAlumno(Alumno &a){
	agenda_.push_back(a);
}

Alumno Agenda::buscarAlumnoDNI(string &dni){
	for(int i=0;i<agenda_.size();i++){
		if(agenda_[i].getDNI()==dni){
			return agenda_[i];
		}
	}
}

std::vector <Alumno> Agenda::buscarAlumnoEquipo(string &equipo){
	std::vector <Alumno> alumnos;
	
	for(int i=0;i<agenda_.size();i++){
		if(agenda_[i].getEquipo()==equipo){
			alumnos.push_back(agenda_[i]);
		}
	}
	
	return alumnos;
}

void Agenda::actuAlumno(const string &dni,Alumno &a){
	for(int i=0;i<agenda_size();i++){
		if(agenda_[i].getDNI()==dni){
			agenda_[i]=a;
		}
	}
}

void Agenda::eliminarAlumno(const string &dni){
	for(int i=0;i<agenda_size();i++){
		if(agenda_[i].getDNI()==dni){
			agenda_.erase(i);
		}
	}
}
