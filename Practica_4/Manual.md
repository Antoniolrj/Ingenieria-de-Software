# Sistema de Administración de Clases y Alumnado

## Manual de usuario

El sistema ACA es un sistema desarrollado para uso educativo, principalmente por profesores, que permite la organización del alumnado y de las clases de cada profesor. Este documento cubrirá todas las funciones del sistema ACA, su correcto uso y las opciones disponibles para la realización de dichas tareas.

El sistema está escrito en el lenguaje de programación C++ y es completamente compatible con cualquier sistema operativo basado en GNU/Linux.

### Registro del administrador del sistema

El sistema permite que una de las cuentas sea registrada como administrador del sistema. Dicho administrador tendrá acceso a todas las bases de datos de las distintas clases, la información de cada alumno en particular, acceso a las cuentas y las contraseñas de los demás usuarios registrados en el sistema y a las copias de seguridad que realiza el sistema.

El registro de dicho usuario se hará como cualquier otro registro, con la peculiaridad de que a la hora de registrarse, debe indicar si esa cuenta va a ser cuenta de administrador o no.

### Registro de los usuarios del sistema

El sistema permite la creación de más de una cuenta de usuario para los distintos profesores existentes. Cada usuario tendrá acceso a las clases creadas por el mismo y a sus alumnos, pero no podrá acceder a las clases y alumnos de otros profesores.

### Inicio de sesión

El usuario deberá introducir el usuario y la contraseña indicadas en el registro para poder acceder al sistema. Si el usuario introduce una contraseña erronea se le imprimirá un mensaje por pantalla diciendole que la contraseña no es correcta. En dicho caso, para recuperar su contraseña, debe contactar con un administrador, indicandole el nombre de cuenta al administrador.

Si el usuario se ha autentificado correctamente, podrá acceder al menú principal del sistema y a sus bases de datos (clases y alumnos).

Si el usuario no está registrado en el sistema, se le imprimirá un mensaje por pantalla indicandole que primero debe registrarse en el sistema y volverá a la pantalla de acreditación o registro.

### Menú principal

Una vez introducido las credenciales y accedido al sistema, el usuario verá el menú principal del sistema, donde podrá ver las distintas opciones que le permite el sistema.

#### 1.Almacenar alumno

Esta opción permitirá almacenar un alumno en el sistema, con la información de ese alumno, como DNI, nombre, apellido y sus notas e información especificada por el profesor. Los campos de nombre, apellido y DNI serán obligatorios para poder almacenar el alumno en el sistema.

Si no se puede almacenar un alumno por que alguno de los campos obligatorios no es correcto o no está rellenado, se indicará el error y se volverá al menú principal.

#### 2. Crear clase

Esta opción permitirá crear una clase bajo la cual se podrán agrupar alumnos indicando que pertenecen a esa clase en concreto. Aquí también se podrán crear los grupos de trabajo de cada clase, con información sobre el grupo como sus integrantes y lider.

Las clases podrán tener un máximo de 150 alumnos asignados a ellas. Para poder crear una clase, debe indicar el nombre de la clase y profesor al que pertenece esa clase. Esos dos campos son obligatorios.

Si intenta introducir más de 150 alumnos en una clase, se le indicará el error y se volverá al menú principal.

Si alguno de los campos obligatorios no está indicado, se indicará un error por pantalla y se volverá al menú principal.

#### 3. Buscar alumno

Esta opción permitirá buscar un alumno por su DNI, nombre, apellido, clase o grupo al que pertenece. Se mostrará por pantalla la información de dicho alumno: su nombre y apellido, DNI, clase y grupo a la que pertenece, si es lider de grupo o no y las notas e información indicadas por el profesor.

Si el DNI o el grupo que se está buscando no existe o es erróneo, se indicará por pantalla y será devuelto al menú principal.

#### 4. Eliminar alumno

Esta opción permite borrar a un alumno y los registros e información de dicho alumno. También le permite eliminar un alumno de una clase o grupo, pero sin eliminar su información. Para poder hacerlo, buscaremos al alumno por los mismos medios indicados en la seccion "Buscar Alumno" y activaremos la opción "Eliminar alumno" y deberemos especificar qué clase de eliminado queremos realizar.

Dicho alumno debe existir en el sistema para poder ser eliminado, de lo contrario, se indicará un error por pantalla y se volverá al menú principal.

#### 5. Actualizar alumno

Esta opción nos permite modificar la información de un alumno previamente buscado por DNI, nombre, apellidos, clase o grupo al que pertenece.

Podremos modificar cualquier campo relacionado con ese alumno y añadir notas o información especifica de dicho alumno.

Si alguno de los campos obligatorios ha sido eliminado, se indicará por pantalla dicho error y se volverá a la ficha del alumno.

#### 6. Listar alumnos

Esta opción nos permite ver todos los alumnos de una clase, ordenados por apellidos. La información que podremos ver es:
  - DNI de los alumnos
  - Nombre y apellidos de los alumnos

Si la clase indicada es errónea o no existe, se indicará un mensaje por pantalla con el error y se volverá al menú principal.
