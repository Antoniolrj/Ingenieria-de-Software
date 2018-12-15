#ifndef AGENDA_H
#define AGENDA_H

#include <vector>
#include "alumno.h"

class Agenda {
	private:
		std::vector <Alumno> agenda_;
	public:
		/* Getters */
		std::vector <Alumno> getAgenda() { return agenda_; };

		void listarAlumnos();
		void nuevoAlumno(Alumno &a);
		Alumno buscarAlumnoDNI(string &dni);
		vector <Alumno> buscarAlumnoEquipo(string &equipo);
		void actuAlumno(const string &dni,Alumno &a);
		void eliminarAlumno(const string &dni);
};

#endif
