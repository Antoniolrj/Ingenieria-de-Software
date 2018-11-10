## Actualizar alumno

**ID: 05**
**Breve Descripción: Se podrá actualizar la información de un alumno.**

---

**Actores principales: Usuario**
**Actores secundarios: Alumno**

1. **Precondiciones**
  > * Debe haber una clase cargada.
  > * El alumno deberá existir en dicha clase.
  > * El alumno deberá tener información guardada anteriormente para poder modificarla.

2. **Flujo Principal**

  > * El caso de uso comienza cuando el usuario desea cambiar la información de alguno de sus alumnos.
  > * Se buscará al alumno cuya información se desea modificar por el DNI o por el apellido.
  > * El sistema recogerá la información nueva y la guardará, sobreescribiendo la anterior.

3. **Postcondiciones**

  > * Los datos del alumno se deberán haber modificado con éxito.

4. **Flujos alternativos**

  > * Si no se puede modificar la información, se mostrará un error por pantalla, tras lo cual se volverá al menú principal.
