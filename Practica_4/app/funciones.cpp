#include "funciones.h"
#include "macros.h"
#include <iostream>

int menuPrincipal(){
	int opcion;
	int posicion;
	
	posicion=8;
	
	std::cout << CLEAR_SCREEN;
	
	LUGAR(5,10);
   	std::cout << BBLUE;
	std::cout << "Programa principial | Opciones del menú";
	std::cout << RESET;
	
	LUGAR(posicion++,10);
	std::cout << "[1] Iniciar sesion";
	
	LUGAR(posicion++,10);
	std::cout << "[2] Registrarse";
	
	LUGAR(posicion++,10);
	std::cout << GREEN << "[0] Salir";
	
	LUGAR(posicion++,20);
	std::cout << IYELLOW;
	std::cout << "Opción: ";
	std::cout << RESET;
	
	std::cin >> opcion;
	std::cin.ignore();
	
	return opcion;
}
