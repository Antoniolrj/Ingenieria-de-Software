## Eliminar alumno

**ID: 06**
**Breve Descripción: Podremos eliminar un alumno.**

---

**Actores principales: Usuario**
**Actores secundarios: Alumno**

1. **Precondiciones**
  > * Debe haber una clase cargada.
  > * El alumno debe existir en dicha clase.

2. **Flujo Principal**

  > * El caso de uso da comienzo cuando el usuario desea borrar un alumno y sus datos permanentemente.
  > * Se podrá buscar al alumno cuya información se desea eliminar por el DNI o por el apellido.
  > * El sistema elimina cualquier información relacionada a ese alumno.

3. **Postcondiciones**

  > * La información del alumno deberá haber sido borrada de forma satisfactoria.

4. **Flujos alternativos**

  > * Si un alumno no se puede borrar, se mostrará un mensaje de error por pantalla, tras lo cual se volverá al menú principal.
