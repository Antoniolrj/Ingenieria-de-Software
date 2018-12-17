#include "profesor.h"
#include <fstream>
#include <iostream>

void Profesor::guardarClase(std::vector<Alumno> &clase){
	std::fstream f;

	f.open(agenda_.c_str(), std::ios::out | std::ios::binary);

	for (int i=0;i<clase.size();i++) {
		f << clase[i].getDNI() << clase[i].getNombre() << clase[i].getApellidos() << clase[i].getEmail() << clase[i].getTlf() << clase[i].getDir() << clase[i].getCurso() << clase[i].getFecnac() << clase[i].getEquipo();
		
		if(clase[i].getLider()){
			f << "si" << std::endl;
		}
		
		else{
			f << "no" << std::endl;
		}
	}

	f.close();
}

void Profesor::cargarClase(std::vector <Alumno> &agenda){
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

	f.open(agenda_.c_str(), std::ios::in | std::ios::binary);

	while(f >> dni){
		f >> nombre >> apellidos >> email >> tlf >> dir >> curso >> fecnac >> equipo >> lid;
		
		if(lid=="si"){
			lider=true;
		}
		
		else{
			lider=false;
		}
		
		Alumno a(dni,nombre,apellidos,email,tlf,dir,curso,fecnac,equipo,lider);
		
		agenda.push_back(a);
	}

	f.close();
}
