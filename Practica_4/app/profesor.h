#ifndef PROFESOR_H
#define PROFESOR_H

#include <string>
#include <vector>
#include "agenda.h"

class Profesor{
	private:
		std::string agenda_;
		bool coordinador_;
		
	public:
		Profesor(std::string agenda,bool coordinador){
			agenda_=agenda;
			coordinador=coordinador;
		}
		
		Profesor(){};
		
		inline std::string getAgenda(){
			return agenda_;
		}
		
		inline bool getCoordinador(){
			return coordinador_;
		}
		
		inline void setAgenda(const std::string &agenda){
			agenda_=agenda;
		}
		
		inline void setCoordinador(bool coordinador){
			coordinador_=coordinador;
		}
		
		void guardarClase(std::vector <Alumno> &clase);
		
		void cargarClase(std::vector <Alumno> &agenda);
		
		void guardarBackup();
		
		void cargarBackup();
};

#endif
