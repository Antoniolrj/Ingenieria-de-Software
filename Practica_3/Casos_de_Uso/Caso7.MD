## Listar Alumnos

**ID: 07**
**Breve Descripción: Se mostrarán todos los alumnos de una clase**

---

**Actores principales: Usuario**
**Actores secundarios: Clase**

1. **Precondiciones**
  > * Deberá haber una clase cargada.
  > * Dicha clase debe contener al menos un alumno.

2. **Flujo Principal**

  > * El caso de uso comienza cuando el usuario desea ver todos los alumnos de una clase.
  > * El sistema mostrará por pantalla la información de los alumnos perteneciente a la clase.

3. **Postcondiciones**

  > * La información de los alumnos de la clase debe aparecer en la pantalla por orden alfabético del primer apellido.

4. **Flujos alternativos**

  > * Si el sistema no puede encontrar la clase, mostrará un error por pantalla, tras lo cual se volverá al menú principal.
  > * Si el sistema no puede mostrar la información de la clase, mostrará un error por pantalla, tras lo cual se volverá al menú principal.
