#include "profesor.h"
#include <fstream>

Docente::Docente(const string &agenda) : Profesor(0)
{
	agenda_.assign(agenda);
}

void Docente::setAgenda(const string &agenda)
{
	agenda_.assign(agenda);
}

void Docente::guardarClase(std::vector<Alumno> clase)
{
	std::fstream f;

	f.open(agenda_, std::fstream::out | std::fstream binary);

	for (std::vector<Alumno>::iterator it = clase.begin(); it != clase.end(); ++it) {
		f.write((char *) &(*it), sizeof((*it))); 
	}

	f.close();
}

void Docente::cargarClase(Agenda &agenda)
{
	std::fstream f;
	std::vector<Alumno> aux;

	f.open(agenda_, std::fstream::in | std::fstream::binary);

	for (Alumno a; f.read((char *) &a, sizeof(Alumno));) {
		aux.push_back(a);
	}

	agenda.setAgenda(&aux);

	f.close();
}
