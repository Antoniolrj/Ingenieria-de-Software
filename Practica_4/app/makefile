OBJETOS = agenda.o profesor.o funciones.o

CPPFLAGS = -c -g -Wall -ansi

objetivo: main.exe

#Opciones para NO depurar
ndebug: CPPFLAGS += -DNDEBUG 
ndebug: objetivo

#Para general a documentacion
main.exe: $(OBJETOS)
								g++ main.cpp $(OBJETOS) -o main 	 

funciones.o: funciones.cpp funciones.h
								g++ $(CPPFLAGS) funciones.cpp

profesor.o: profesor.cpp profesor.h
								g++ $(CPPFLAGS) profesor.cpp

agenda.o: agenda.cpp agenda.h alumno.h
								g++ $(CPPFLAGS) agenda.cpp

clean:
	rm -rf *~ $(OBJETOS)
