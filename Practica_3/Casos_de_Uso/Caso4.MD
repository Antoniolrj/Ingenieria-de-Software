## Búsqueda de alumno

**ID: 04**
**Breve Descripción: Se podrá buscar un alumno.**

---

**Actores principales: Usuario**
**Actores secundarios: Alumno**

1. **Precondiciones**
  > * Debe haber una clase cargada.
  > * El alumno debe existir en dicha clase.

2. **Flujo Principal**

  > * El caso de uso comienza cuando el usuario desea buscar un alumno.
  > * El alumno se debe buscar por DNI, por apellido o por el grupo al que pertenece.
  > * Se muestra la información del alumno por pantalla.

3. **Postcondiciones**

  > * La información del alumno debe aparecer en la pantalla.
  > * Si hay varios alumnos con el mismo apellido se mostrará por pantalla todos los alumnos con el apellido.
  > * Si buscamos por grupos, se mostrará por pantalla todos los alumnos pertenecientes a dicho grupo.

4. **Flujos alternativos**

  > * Si el alumno no se puede encontrar, se mostrará un mensaje de error por pantalla, tras lo cual se volverá al menú principal.
  > * Si existe más de un alumno cuyos datos coinciden con los de la búsqueda, se mostrarán todos ellos por pantalla.
