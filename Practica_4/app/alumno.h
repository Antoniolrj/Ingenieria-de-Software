#ifndef ALUMNO_H
#define ALUMNO_H

#include <iostream>
#include <cassert>

class Alumno{
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
			
			#ifndef NDEBUG
				assert(getDNI()==dni and getNombre()==nombre and getApellidos()==apellidos and getEmail()==email and getTlf()==tlf and getDir()==dir and getCurso()==curso and getFecnac()==fecnac and getEquipo()==equipo and getLider()==lider);
			#endif
		}
		
		Alumno(){};

		/* Getters */
		inline const std::string &getDNI() const{
			return dni_;
		}
		
		inline const std::string &getNombre() const{
			return nombre_;
		}
		
		inline const std::string &getApellidos() const{
			return apellidos_;
		}
		
		inline const std::string &getEmail() const{
			return email_;
		}
		
		inline const std::string &getTlf() const{
			return tlf_;
		}
		
		inline const std::string &getDir() const{
			return dir_;
		}
		
		inline int getCurso() const{
			return curso_;
		}
		
		inline const std::string &getFecnac() const{
			return fecnac_;
		}
		
		inline int getEquipo() const{
			return equipo_;
		}
		
		inline bool getLider() const{
			return lider_;
		}

		/* Setters */
		inline void setDNI(const std::string &dni){
			dni_=dni;
			
			#ifndef NDEBUG
				assert(getDNI()==dni);
			#endif
		}
		
		inline void setNombre(const std::string &nombre){
			nombre_=nombre;
			
			#ifndef NDEBUG
				assert(getNombre()==nombre);
			#endif
		}
		
		inline void setApellidos(const std::string &apellidos){
			apellidos_=apellidos;
			
			#ifndef NDEBUG
				assert(getApellidos()==apellidos);
			#endif
		}
		
		inline void setEmail(const std::string &email){
			email_=email;
			
			#ifndef NDEBUG
				assert(getEmail()==email);
			#endif
		}
		
		inline void setTlf(const std::string &tlf){
			tlf_=tlf;
			
			#ifndef NDEBUG
				assert(getTlf()==tlf);
			#endif
		}
		
		inline void setDir(const std::string &dir){
			dir_=dir;
			
			#ifndef NDEBUG
				assert(getDir()==dir);
			#endif
		}
		
		inline void setCurso(const int curso){
			curso_=curso;
			
			#ifndef NDEBUG
				assert(getCurso()==curso);
			#endif
		}
		
		inline void setFecnac(const std::string &fecnac){
			fecnac_=fecnac;
			
			#ifndef NDEBUG
				assert(getFecnac()==fecnac);
			#endif
		}
		
		inline void setEquipo(const int equipo){
			equipo_=equipo;
			
			#ifndef NDEBUG
				assert(getEquipo()==equipo);
			#endif
		}
		
		inline void setLider(bool lider){
			lider_=lider;
			
			#ifndef NDEBUG
				assert(getLider()==lider);
			#endif
		}

		inline void listarAlumno(){
			std::cout << "DNI -> \t\t" << dni_ << std::endl;
			std::cout << "Nombre -> \t" << nombre_ << std::endl;
			std::cout << "Apellidos -> \t" << apellidos_ << std::endl;
			std::cout << "Email -> \t" << email_ << std::endl;
			std::cout << "Tlf -> \t\t" << tlf_ << std::endl;
			std::cout << "Dir -> \t\t" << dir_ << std::endl;
			std::cout << "Curso -> \t" << curso_ << std::endl;
			std::cout << "Fecha Nac -> \t" << fecnac_ << std::endl;
			std::cout << "Equipo -> \t" << equipo_ << std::endl;
			std::cout << "Lider -> \t";
			
			if(getLider()){
				std::cout << "Si\n";
			}
			
			else{
				std::cout << "No\n";
			}
		}
		
		bool operator==(const Alumno &a) const{
			return (getDNI()==a.getDNI());
		}
};

#endif
