# Sistema de Administración de Clases y Alumnado

## Manual de usuario

El sistema ACA es un sistema desarrollado para uso educativo, principalmente por profesores, que permite la organización del alumnado y de las clases de cada profesor. Este documento cubrirá todas las funciones del sistema ACA, su correcto uso y las opciones disponibles para la realización de dichas tareas.

El sistema está escrito en el lenguaje de programación C++ y es completamente compatible con cualquier sistema operativo basado en GNU/Linux.

### Registro de los usuarios del sistema

El sistema permite la creación de más de una cuenta de usuario para los distintos profesores existentes o más de una cuenta para un mismo profesor.

### Inicio de sesión

El usuario deberá introducir el usuario y la contraseña indicadas en el registro para poder acceder al sistema. Si el usuario introduce una contraseña erronea se le imprimirá un mensaje por pantalla diciendole que la contraseña no es correcta. En dicho caso, para recuperar su contraseña, debe contactar con un administrador, indicandole el nombre de cuenta al administrador.

Si el usuario se ha autentificado correctamente, podrá acceder al menú principal del sistema y a sus bases de datos (clases y alumnos).

Si el usuario no está registrado en el sistema, se le imprimirá un mensaje por pantalla indicandole que primero debe registrarse en el sistema y volverá a la pantalla de acreditación o registro.

### Menú principal

Una vez introducido las credenciales y accedido al sistema, el usuario verá el menú principal del sistema, donde podrá ver las distintas opciones que le permite el sistema.

#### 1. Asignar clase



#### 2.Almacenar alumno

Esta opción permitirá almacenar un alumno en el sistema, con la información de ese alumno, como DNI, nombre, apellido y sus notas e información especificada por el profesor. Los campos de nombre, apellido, DNI y grupo al que pertenecen serán obligatorios para poder almacenar el alumno en el sistema.

Si no se puede almacenar un alumno por que alguno de los campos obligatorios no es correcto o no está rellenado, se indicará el error y se volverá al menú principal.

#### 3. Crear clase

Esta opción permitirá crear una clase bajo la cual se podrán agrupar alumnos indicando que pertenecen a esa clase en concreto.

Las clases podrán tener un máximo de 150 alumnos asignados a ellas. Para poder crear una clase, debe indicar el nombre de la clase.

Si intenta introducir más de 150 alumnos en una clase, se le indicará el error y se volverá al menú principal.

Si alguno de los campos obligatorios no está indicado, se indicará un error por pantalla y se volverá al menú principal.

#### 4. Buscar alumno

Esta opción permitirá buscar un alumno por su DNI, nombre, apellido, clase o grupo al que pertenece. Se mostrará por pantalla la información de dicho alumno: su nombre y apellido, DNI, clase y grupo a la que pertenece y si es lider de grupo o no 

Si la información indicada para realizar la búsqueda no existe o es erróneo, se indicará por pantalla y será devuelto al menú principal.

#### 5. Eliminar alumno

Esta opción permite borrar a un alumno y los registros e información de dicho alumno. T Para poder hacerlo, buscaremos al alumno por los mismos medios indicados en la seccion "Buscar Alumno" y activaremos la opción "Eliminar alumno".

Dicho alumno debe existir en el sistema para poder ser eliminado, de lo contrario, se indicará un error por pantalla y se volverá al menú principal.

#### 6. Actualizar alumno

Esta opción nos permite modificar la información de un alumno previamente buscado por DNI, nombre, apellidos, clase o grupo al que pertenece.

Podremos modificar cualquier campo relacionado con ese alumno.

Si alguno de los campos obligatorios ha sido eliminado, se indicará por pantalla dicho error y se volverá a la ficha del alumno.

#### 7. Listar alumnos

Esta opción nos permite ver todos los alumnos de una clase. La información que podremos ver es:
  - DNI de los alumnos
  - Nombre y apellidos de los alumnos

Si la clase indicada es errónea o no existe, se indicará un mensaje por pantalla con el error y se volverá al menú principal.

### Base de datos

Las clases y los usuarios se guardarán en ficheros binarios en la carpeta donde se ubica el sistema.
