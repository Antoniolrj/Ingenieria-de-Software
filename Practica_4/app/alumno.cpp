#include <string>
#include <iostream>
#include "alumno.h"

Alumno::Alumno(const string &dni, const string &nombre, const string &ape, const string &email,	\
		const string &tlf, const string &dir, const string &curso, const string &fecnac,\
		const string &equipo, bool lider)
{
	dni_.assign(dni);
	nombre_.assign(nombre);
	apellidos_.assign(ape);
	email_.assign(email);
	tlf_.assign(tlf);
	dir_.assign(dir);
	curso_.assign(curso);
	fecnac_.assign(fecnac);
	equipo_.assign(equipo);
	lider_ = lider;
}

Alumno::setDNI(const string &dni) { dni_.assign(dni); }
Alumno::setNombre(const string &nombre) { nombre_.assign(nombre); }
Alumno::setApellidos(const string &ape) { apellidos_.assign(ape); }
Alumno::setEmail(const string &email) { email_.assign(email); }
Alumno::setTlf(const string &tlf) { tlf_.assign(tlf); }
Alumno::setDir(const string &dir) { dir_.assign(dir); }
Alumno::setCurso(const string &curso) { curso_.assign(curso); }
Alumno::setFecnac(const string &fecnac) { fecnac_.assign(fecnac); }
Alumno::setEquipo(const string &equipo) { equipo_.assign(equipo); }

Alumno::listarAlumno()
{
	std::cout << "DNI -> \t\t" << dni_ << std::endl;
	std::cout << "Nombre -> \t" << nombre_ << std::endl;
	std::cout << "Apellidos -> \t" << apellidos_ << std::endl;
	std::cout << "Email -> \t\t" << email_ << std::endl;
	std::cout << "Tlf -> \t\t" << tlf_ << std::endl;
	std::cout << "Dir -> \t\ŧ" << dir_ << std::endl;
	std::cout << "Curso -> \t\t" << curso_ << std::endl;
	std::cout << "Fecha Nac -> \t" << fecnac_ << std::endl;
	std::cout << "Equipo -> \t" << equipo_ << std::endl;
	std::cout << "Lider -> \t\t";
	if (getLider()) { cout << "Si\n"; } else { cout << "No\n"; };
}
