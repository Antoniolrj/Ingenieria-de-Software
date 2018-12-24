# Sistema de Administración de Clases y Alumnado

## Manual de usuario

El sistema ACA es un sistema desarrollado para uso educativo, principalmente por profesores, que permite la organización del alumnado y de las clases de cada profesor. Este documento cubrirá todas las funciones del sistema ACA, su correcto uso y las opciones disponibles para la realización de dichas tareas.

El sistema está escrito en el lenguaje de programación C++ y es completamente compatible con cualquier sistema operativo basado en GNU/Linux.

### Registro de los usuarios del sistema

El sistema permite la creación de más de una cuenta de usuario para los distintos profesores existentes o más de una cuenta para un mismo profesor.

### Inicio de sesión

El usuario deberá introducir el usuario y la contraseña indicadas en el registro para poder acceder al sistema. Si el usuario introduce una contraseña erronea se le imprimirá un mensaje por pantalla diciendole que la contraseña no es correcta. En dicho caso, para recuperar su contraseña, debe contactar con un administrador, indicandole el nombre de cuenta al administrador.

Si por cualquier razón no puede recuperar su cuenta, siempre puede crear otra cuenta.

Si el usuario se ha autentificado correctamente, podrá acceder al menú principal del sistema y a sus bases de datos (clases y alumnos).

Si el usuario no está registrado en el sistema, se le imprimirá un mensaje por pantalla indicandole que primero debe registrarse en el sistema y volverá a la pantalla de acreditación o registro.

### Menú principal

Una vez introducido las credenciales y accedido al sistema, el usuario verá el menú principal del sistema, donde podrá ver las distintas opciones que le permite el sistema.

#### 1. Asignar clase

Esta es la opción principal para poder crear clases o cambiar entre las clases bajo las cuales se agrupan los alumnos que pertenezcan a una clase.

Las clases no podrán tener más de 150 alumnos.

Si intenta introducir más de 150 alumnos en una clase, se le indicará un error y volverá al menú principal.

Para crear una nueva clase simplemente usamos esta opción y asignamos un nombre a la clase.

Para cambiar a otra clase mientras ya hay una cargada, volvemos a usar esta opción e indicamos el nombre de la otra clase. Una vez hayamos hecho esto, volveremos al menú principal y podremos cargar la otra clase.

Atención: Es recomendable guardar los cambios realizados en una clase antes de cambiar a otra.

#### 2. Cargar clase

Esta opción se usa en conjunto con la primera opción (Asignar clase). Una vez indicado el nombre de la clase a cargar en la opción "Asignar clase", podremos usar esta opcion para realizar el cargado de la clase.

#### 3. Guardar clase

Esta opción nos permite guardar una clase después de haberla creado (para crear una clase, volver al punto 1 "Asignar clase"). Guardará la clase y su información (alumnos e información de esos alumnos) en un fichero binario.

Si la clase no ha podido ser guardada nos dará un error y volverá al menú principal.

#### 4. Mostrar clase

Esta opción nos permite ver todos los alumnos de una clase, además nos mostrará toda la información de los alumnos.

Si la clase indicada es errónea o no existe, se indicará un mensaje por pantalla con el error y se volverá al menú principal.

#### 5. Borrar clase

Esta opción nos permite eliminar una clase y toda la información adjunta a ella. Para borrar una clase, primero tenemos que cargarla en el sistema.

Si no se ha podido eliminar una clase, nos imprimirá un error por pantalla y se volverá al menú principal.

#### 6. Buscar alumno

Esta opción permitirá buscar un alumno por su DNI, nombre, apellido o grupo al que pertenece. Se mostrará por pantalla la información de dicho alumno: su nombre y apellido, DNI y grupo al que pertenece y si es lider de grupo o no 

Si la información indicada para realizar la búsqueda no existe o es erróneo, se indicará por pantalla y será devuelto al menú principal.

#### 7.Insertar alumno

Esta opción permitirá almacenar un alumno en el sistema, con la información de ese alumno, como DNI, nombre y apellido. Los campos de nombre, apellidos, DNI y grupo al que pertenecen serán obligatorios para poder almacenar el alumno en el sistema.

Si no se puede almacenar un alumno por por un fallo del usuario o del sistema, se indicará el error y se volverá al menú principal.

#### 8. Actualizar alumno

Esta opción nos permite modificar la información de un alumno previamente buscado por DNI.

Podremos modificar cualquier campo relacionado con ese alumno.

Hay que rellenar todos los campos para que la modificación se haga correctamente.

#### 9. Eliminar alumno

Esta opción permite borrar a un alumno y los registros e información de dicho alumno. Para poder hacerlo, buscaremos al alumno por su DNI y activaremos la opción "Eliminar alumno".

Dicho alumno debe existir en el sistema para poder ser eliminado, de lo contrario, se indicará un error por pantalla y se volverá al menú principal.

### Base de datos

Las clases y los usuarios se guardarán en ficheros binarios en la carpeta donde se ubica el sistema.

Las clases serán guardadas bajo el nombre de la clase y los profesores registrados bajo un fichero llamado "profesores"
