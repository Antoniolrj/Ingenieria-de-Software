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
		inline std::vector <Alumno> &getAgenda(){
			return agenda_;
		}

		/* Setters */
		inline void setAgenda(std::vector <Alumno> agenda){
			agenda_=agenda;
			
			#ifndef NDEBUG
				assert(getAgenda()==agenda);
			#endif
		}

		void listarAlumnos();
		
		bool existeAlumno(std::string dni);
		
		bool existeAlumno(int equipo);
		
		bool existeAlumnoNombre(std::string nombre);
		
		bool existeAlumnoApellidos(std::string apellidos);
		
		inline void nuevoAlumno(Alumno &a){
			#ifndef NDEBUG
				assert(a.getDNI()!="" and !existeAlumno(a.getDNI()));
			#endif
			
			agenda_.push_back(a);
			
			#ifndef NDEBUG
				assert(existeAlumno(a.getDNI()));
			#endif
		}
		
		Alumno buscarAlumnoDNI(std::string dni);
		
		std::vector <Alumno> buscarAlumnoEquipo(int equipo);
		
		std::vector <Alumno> buscarAlumnoNombre(std::string nombre);
		
		std::vector <Alumno> buscarAlumnoApellidos(std::string apellidos);
		
		void actuAlumno(const std::string &dni,Alumno &a);
		
		void eliminarAlumno(const std::string &dni);
};

#endif
