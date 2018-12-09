#include <list>
#include "alumno.h"

using std::list;

class Agenda {
	private:
		list<Alumno> agenda_;
	public:
		/* Getters */
		list<Alumno> getAgenda() { return agenda_; };

		void listarAlumnos();
		void nuevoAlumno(Alumno &a);
		Alumno buscarAlumnoDNI(string &dni);
		Alumno buscarAlumnoEquipo(string &equipo);
		void actuAlumno(const string &dni);
};:
