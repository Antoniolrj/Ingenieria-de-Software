#include "funciones.h"
#include "macros.h"

int main(){
	int opcion;
	bool iniciado=false;
	Profesor profesor;
	Agenda agenda;
	int busqueda;

	do{
		opcion=menuPrincipal();
		
		std::cout << CLEAR_SCREEN;
		
		LUGAR(5,1);
		
		switch(opcion){
			case 0:
				std::cout << INVERSE << "Fin del programa" << RESET << std::endl;
				
				return 0;
				
			case 1:
				std::cout << "[1] Iniciar sesion" << std::endl << std::endl;
				
				iniciado=inicioSesion(profesor);
				
				break;
				
			case 2:
				std::cout << "[2] Registrarse" << std::endl << std::endl;
				
				registro();
				
				break;
		}
	}while(!iniciado);
	
	do{
		opcion=menuSesion();
		
		std::cout << CLEAR_SCREEN;
		LUGAR(5,1);
		
		switch(opcion){
			case 0:
				std::cout << INVERSE << "Fin del programa" << RESET << std::endl;
				
				return 0;
				
			case 1:
				std::cout << "[1] Asignar clase" << std::endl << std::endl;
				
				if(profesor.getCoordinador()){
					asignarClase(profesor,agenda);
				}
				
				break;
				
			case 2:
				std::cout << "[2] Cargar clase" << std::endl << std::endl;
				
				cargarClase(profesor,agenda);
				
				break;
				
			case 3:
				std::cout << "[3] Guardar clase" << std::endl << std::endl;
				
				guardarClase(profesor,agenda);
				
				break;
				
			case 4:
				std::cout << "[4] Mostrar clase" << std::endl << std::endl;
				
				mostrarClase(profesor,agenda);
				
				break;
				
			case 5:
				std::cout << "[5] Borrar clase" << std::endl << std::endl;
				
				borrarClase(profesor,agenda);
				
				break;
				
			case 6:
				std::cout << "[6] Buscar alumnos" << std::endl << std::endl;
				
				buscarAlumnos(profesor,agenda);
				
				break;
				
			case 7:
				std::cout << "[7] Insertar alumno" << std::endl << std::endl;
				
				if(profesor.getCoordinador()){
					insertarAlumno(profesor,agenda);
				}
				
				break;
				
			case 8:
				std::cout << "[8] Modificar alumno" << std::endl << std::endl;
				
				if(profesor.getCoordinador()){
					modificarAlumno(profesor,agenda);
				}
				
				break;
				
			case 9:
				std::cout << "[9] Borrar alumno" << std::endl << std::endl;
				
				if(profesor.getCoordinador()){
					borrarAlumno(profesor,agenda);
				}
				
				break;
				
			default:
				LUGAR(25,25);
				std::cout << INVERSE << "Opción incorrecta " << RESET << RED << " --> " << opcion << RESET << std::endl;
				
				break;
		}
	}while(opcion!=0);
	
	if(opcion !=0){
		LUGAR(30,25);
		std::cout << "pulse " << UNDERLINE << IYELLOW << "ENTER" << RESET << " para " << INVERSE << "continuar" << RESET;
		getchar();
		std::cout << CLEAR_SCREEN;
	}
	
	return 0;
}
