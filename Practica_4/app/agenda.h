#ifndef AGENDA_H
#define AGENDA_H

#include <vector>
#include "alumno.h"
#include <string>

class Agenda{
	private:
		std::vector <Alumno> agenda_;
		
	public:
		/* Getters */
		inline std::vector <Alumno> getAgenda(){
			return agenda_;
		}

		/* Setters */
		inline void setAgenda(std::vector <Alumno> agenda){
			agenda_=agenda;
		}

		void listarAlumnos();
		
		inline void nuevoAlumno(Alumno &a){
			agenda_.push_back(a);
		}
		
		Alumno buscarAlumnoDNI(std::string &dni);
		
		std::vector <Alumno> buscarAlumnoEquipo(int equipo);
		
		void actuAlumno(const std::string &dni,Alumno &a);
		
		void eliminarAlumno(const std::string &dni);
};

#endif
