#include <string>

class Alumno {
	private:
		string dni_;
		string nombre_;
		string apellidos_;
		strgin email_;
		string tlf_;
		string dir_;
		string curso_;
		string fecnac_;
		string equipo_;
		bool lider_;
	public:
		/* Constructor por defecto */
		Alumno(const string &dni, const string &nombre, const string &ape, const string &email,	\ 
				const string &tlf, const string &dir, const string &curso,		\
				const string &fecanc, const string &equipo, bool lider);

		/* Getters */
		string getDNI() { return dni_; };
		string getNombre() { return nombre_; };
		string getApellidos() { return apellidos_; };
		string getEmail() { return email_; };
		string getTlf() { return tlf_; };
		string getDir() { return dir_; };
		string getCurso() { return curso_; };
		string getFecnac() { return fecnac_; };
		string getEquipo() { return equipo_; };
		bool getLider() { return lider_; };

		/* Setters */
		void setDNI(const string &dni);
		void setNombre(const string &nombre);
		void setApellidos(const string &ape);
		void setEmail(const string &email);
		void setTlf(const string &tlf);
		void setDir(const string &dir);
		void setCurso(const string &curso);
		void setFecnac(const string &fecnac);
		void setEquipo(const string &equipo);
		void setLider(bool lider) { lider_ = lider; };

		void listarAlumno();
};
