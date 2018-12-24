# Especificación de requisitos

El profesorado de la asignatura de Ingeniería del Software quiere informatizar los datos de contacto de los alumnos en un programa informático que guarde esta información

## Requisitos

La prioridad de cada uno de los requisitos vendrá determinada por una numeración ascendente desde el 1 (siendo la prioridad más alta) a 5 (siendo la más baja).

### Requisitos Funcionales

1. (**2**) Se deberán guardar datos personales para cada alumno. Los datos a guardar son los siguientes:
	* DNI
	* Nombre
	* Apellidos
	* Correo Electrónico
	* Teléfono
	* Dirección
	* Curso más alto en el que está matriculado
	* Fecha de nacimiento
	* Equipo al que pertenece
	* Líder/No líder

2. (**2**) Deberá ser posible grabar los datos de los alumnos en ficheros.

2. (**2**) Deberá ser posible cargar los datos de los alumnos en ficheros.

4. (**3**) Deberá ser posible buscar a un usuario:
	* Por DNI
	* Por Apellido
	* Por Grupo
	
5. (**4**) Deberá ser posible actualizar los datos de un alumno.

6. (**4**) Deberá ser posible eliminar a un alumno.

7. (**5**) Cuando se listen los usuarios de la clase, deberá ser posible mostrar los datos ordenados:
	* Por DNI
	* Por nombre
	* Por apellido
	* Por curso matriculado
	
8.  (**2**) El profesor deberá ser capaz de registrarse en el sistema.

9. (**2**) El profesor deberá ser capaz de iniciar sesión en el sistema.
	
### Requisitos no Funcionales

1. (**1**) La herramienta deberá funcionar bajo sistemas GNU/Linux.

2. (**2**) Los campos *Líder* y *Equipo* no serán obligatorios.

3. (**2**) Solo se podrán guardar un máximo de 150 alumnos.

4. (**2**) El tipo de fichero en el que se guardarán los datos deberá ser de tipo binario.
