#ifndef PROFESOR_H
#define PROFESOR_H

#include "agenda.h"

class Profesor{
	private:
		std::string agenda_;
		bool coordinador_;
		
	public:
		Profesor(std::string agenda,bool coordinador){
			agenda_=agenda;
			coordinador=coordinador;
			
			#ifndef NDEBUG
				assert(getAgenda()==agenda and getCoordinador()==coordinador);
			#endif
		}
		
		Profesor(){};
		
		inline std::string getAgenda(){
			return agenda_;
		}
		
		inline bool getCoordinador(){
			return coordinador_;
		}
		
		inline void setAgenda(std::string agenda){
			agenda_=agenda;
			
			#ifndef NDEBUG
				assert(getAgenda()==agenda);
			#endif
		}
		
		inline void setCoordinador(bool coordinador){
			coordinador_=coordinador;
			
			#ifndef NDEBUG
				assert(getCoordinador()==coordinador);
			#endif
		}
		
		bool cargarClase(std::string nombre_fichero,Agenda &agenda);
		
		bool guardarClase(std::string nombre_fichero,Agenda &agenda);
		
		void cargarBackup();
		
		void guardarBackup();
};

#endif
