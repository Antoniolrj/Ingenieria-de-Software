## Inicio de sesión

**ID: 09**
**Breve Descripción: El usuario debe ser capaz de acceder al sistema**

---

**Actores principales: Usuario**
**Actores secundarios: Sistema**

1. **Precondiciones**

  > * El nombre de usuario debe estar registrado en el sistema.
  > * La contraseña corresponda con el nombre de usuario.
  > * Que no haya otra sesión iniciada.

2. **Flujo Principal**

  > * El caso de uso comienza cuando el usuario quiere acceder al sistema.
  > * El usuario debe introducir un nombre de usuario y una contraseña que ya existan en el sistema.
  > * Tras introducir la información requerida, se llevará el usuario al menú principal.

3. **Postcondiciones**

  > * Tras una correcta validación, el usuario habrá accedido al menú principal.

4. **Flujos alternativos**

  > * Si el usuario ha introducido una contraseña errónea, se mostrará un error por pantalla y se llevará al usuario al menú de inicio de sesión
  > * Si el usuario ha introducido un nombre de usuario que no está registrado en el sistema se mostrará un error por pantalla y se llevará al usuario al menú de inicio de sesión.
