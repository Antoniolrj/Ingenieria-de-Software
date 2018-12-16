#ifndef PROFESOR_H
#define PROFESOR_H

#include <string>
#include <vector>
#include "agenda.h"

class Profesor {
	private:
		/*
		 *  0 -> Docente
		 *  1 -> Gestor
		 */
		int rol_;
	public:
		Profesor(int rol);
		int getRol() { return rol_; };
};

class Docente : public Profesor {
	private:
		std::string agenda_;
	public:
		Docente(const string &agenda);
		std::string getAgenda() { return agenda_; };
		void setAgenda(const string &agenda);
		void guardarClase(std::vector<Alumno> clase);
		void cargarClase(Agenda &agenda);
};

class Gestor : public Profesor {
	private:
		std::string archivo_;
	public:
		Gestor(const string &nombre);
		void guardarBackup();
		void cargarBackup();
};

#endif
