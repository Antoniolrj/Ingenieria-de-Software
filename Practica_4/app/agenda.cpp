#include "agenda.h"

void Agenda::listarAlumnos(){
	#ifndef NDEBUG
		assert(!getAgenda().empty());
	#endif
	
	for(unsigned int i=0;i<agenda_.size();i++){
		agenda_[i].listarAlumno();
		
		std::cout << std::endl << std::endl;
	}
}

bool Agenda::existeAlumno(std::string dni){
	#ifndef NDEBUG
		assert(dni!="");
	#endif
	
	for(unsigned int i=0;i<agenda_.size();i++){
		if(agenda_[i].getDNI()==dni){
			return true;
		}
	}
	
	return false;
}

bool Agenda::existeAlumno(int equipo){
	#ifndef NDEBUG
		assert(equipo>0);
	#endif
	
	for(unsigned int i=0;i<agenda_.size();i++){
		if(agenda_[i].getEquipo()==equipo){
			return true;
		}
	}
	
	return false;
}

Alumno Agenda::buscarAlumnoDNI(std::string dni){
	#ifndef NDEBUG
		assert(!getAgenda().empty() and dni!="" and existeAlumno(dni));
	#endif
	
	unsigned int i;
	
	for(i=0;i<agenda_.size();i++){
		if(agenda_[i].getDNI()==dni){
			break;
		}
	}
	
	#ifndef NDEBUG
		assert(getAgenda()[i].getDNI()==dni);
	#endif
	
	return agenda_[i];
}

std::vector <Alumno> Agenda::buscarAlumnoEquipo(int equipo){
	#ifndef NDEBUG
		assert(!getAgenda().empty() and equipo>0 and existeAlumno(equipo));
	#endif
	
	std::vector <Alumno> alumnos;
	
	for(unsigned int i=0;i<agenda_.size();i++){
		if(agenda_[i].getEquipo()==equipo){
			alumnos.push_back(agenda_[i]);
		}
	}
	
	return alumnos;
}

void Agenda::actuAlumno(const std::string &dni,Alumno &a){
	#ifndef NDEBUG
		assert(existeAlumno(dni));
	#endif
	
	unsigned int i;
	
	for(i=0;i<agenda_.size();i++){
		if(agenda_[i].getDNI()==dni){
			agenda_[i]=a;
		}
	}
}

void Agenda::eliminarAlumno(const std::string &dni){
	#ifndef NDEBUG
		assert(dni!="" and existeAlumno(dni));
	#endif
	
	for(unsigned int i=0;i<agenda_.size();i++){
		if(agenda_[i].getDNI()==dni){
			agenda_.erase(agenda_.begin()+i);
		}
	}
	
	#ifndef NDEBUG
		assert(!existeAlumno(dni));
	#endif
}
