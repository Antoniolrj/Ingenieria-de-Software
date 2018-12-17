#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>
#include <iostream>

class Alumno {
	private:
		std::string dni_;
		std::string nombre_;
		std::string apellidos_;
		std::string email_;
		std::string tlf_;
		std::string dir_;
		int curso_;
		std::string fecnac_;
		int equipo_;
		bool lider_;
		
	public:
		/* Constructor por defecto */
		Alumno(const std::string &dni, const std::string &nombre, const std::string &apellidos, const std::string &email, const std::string &tlf, const std::string &dir, const int &curso, const std::string &fecnac, const int &equipo, bool lider){
			dni_=dni;
			nombre_=nombre;
			apellidos_=apellidos;
			email_=email;
			tlf_=tlf;
			dir_=dir;
			curso_=curso;
			fecnac_=fecnac;
			equipo_=equipo;
			lider_=lider;
		}

		/* Getters */
		inline std::string getDNI(){
			return dni_;
		}
		
		inline std::string getNombre(){
			return nombre_;
		}
		
		inline std::string getApellidos(){
			return apellidos_;
		}
		
		inline std::string getEmail(){
			return email_;
		}
		
		inline std::string getTlf(){
			return tlf_;
		}
		
		inline std::string getDir(){
			return dir_;
		}
		
		inline int getCurso(){
			return curso_;
		}
		
		inline std::string getFecnac(){
			return fecnac_;
		}
		
		inline int getEquipo(){
			return equipo_;
		}
		
		inline bool getLider(){
			return lider_;
		}

		/* Setters */
		inline void setDNI(const std::string &dni){
			dni_=dni;
		}
		
		inline void setNombre(const std::string &nombre){
			nombre_=nombre;
		}
		
		inline void setApellidos(const std::string &apellidos){
			apellidos_=apellidos;
		}
		
		inline void setEmail(const std::string &email){
			email_=email;
		}
		
		inline void setTlf(const std::string &tlf){
			tlf_=tlf;
		}
		
		inline void setDir(const std::string &dir){
			dir_=dir;
		}
		
		inline void setCurso(const int curso){
			curso_=curso;
		}
		
		inline void setFecnac(const std::string &fecnac){
			fecnac_=fecnac;
		}
		
		inline void setEquipo(const int equipo){
			equipo_=equipo;
		}
		
		inline void setLider(bool lider){
			lider_=lider;
		}

		inline void listarAlumno(){
			std::cout << "DNI -> \t\t" << dni_ << std::endl;
			std::cout << "Nombre -> \t" << nombre_ << std::endl;
			std::cout << "Apellidos -> \t" << apellidos_ << std::endl;
			std::cout << "Email -> \t\t" << email_ << std::endl;
			std::cout << "Tlf -> \t\t" << tlf_ << std::endl;
			std::cout << "Dir -> \t\t" << dir_ << std::endl;
			std::cout << "Curso -> \t\t" << curso_ << std::endl;
			std::cout << "Fecha Nac -> \t" << fecnac_ << std::endl;
			std::cout << "Equipo -> \t" << equipo_ << std::endl;
			std::cout << "Lider -> \t\t";
			
			if(getLider()){
				std::cout << "Si\n";
			}
			
			else{
				std::cout << "No\n";
			}
		}
};

#endif
