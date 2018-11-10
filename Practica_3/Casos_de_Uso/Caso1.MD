## Almacenar alumno

**ID: 01**
**Breve Descripción: Se pueden almacenar los alumnos**



---



**Actores principales:** Usuario

**Actores secundarios:** Alumno



1. **Precondiciones**

  
> * El alumno debe estar matriculado en el curso del profesor.
> * El alumno no debe estar ya cargado en el sistema.



2. **Flujo Principal**

  
> * El caso de uso comienza cuando el usuario necesita almacenar un alumno.

> * El sistema recoge los datos del alumno.

> * Se podrá indicar si el alumno pertenece a algún grupo y si es líder o no.



3. **Postcondiciones**


> * La información del alumno ha de estar almacenada.

> * Debe quedar distinguido si un alumno es líder de grupo o no.



4. **Flujos alternativos**


> * Si el sistema no puede guardar un alumno y sus datos, mostrará un mensaje de error por pantalla, tras lo cual se volverá al menú principal.
> * Si otro alumno tiene el mismo DNI o e-mail, se mostrará un mensaje de error por pantalla, tras lo cual se volverá al menú principal.
> * Si el alumno es líder de un grupo en el que ya hay un líder con anterioridad, se mostrará un mensaje de error por pantalla, tras lo cual se volverá al menú principal.
