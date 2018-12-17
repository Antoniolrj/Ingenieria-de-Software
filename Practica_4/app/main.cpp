#include "funciones.h"
#include <iostream>
#include "macros.h"

int main(){
	int opcion;
	bool iniciado=false;
	Profesor profesor;

	do{
		do{
			opcion=menuPrincipal();
			
			if(opcion<0 or opcion>2){
				std::cout << CLEAR_SCREEN;
				
				std::cout << BRED << "Error: no ha introducido ninguna opcion valida" << RESET;
			}
		}while(opcion<0 or opcion>2);
		
		std::cout << CLEAR_SCREEN;
		LUGAR(5,1);
		
		switch(opcion){
			case 0:
				std::cout << INVERSE << "Fin del programa" << RESET << std::endl;
				
				break;
				
			case 1:
				std::cout << "[1] Iniciar sesion" << std::endl;
				profesor=inicioSesion();
				
				break;
				
			case 2:
				std::cout << "[2] Registrarse" << std::endl;
				registro();
				
				break;
		}
	}while(!iniciado);
}
