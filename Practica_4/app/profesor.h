#ifndef PROFESOR_H
#define PROFESOR_H

#include <string>

class Profesor{
	private:
		std::string rol_;
		std::string agenda_;
		
	public:
		void guardarClase();
		void cargarClase();
		void guardarBackup();
		void cargarBackup();
};

#endif
