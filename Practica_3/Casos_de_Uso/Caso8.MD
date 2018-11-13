## Registro del Profesor

**ID: 08**
**Breve Descripción: El profesor debe ser capaz de registrarse en el sistema**

---

**Actores principales: Usuario**
**Actores secundarios: Sistema**

1. **Precondiciones**

  > * El profesor no debe estar registrado en el sistema.
  > * El nombre de usuario escogido no debe estar ocupado.

2. **Flujo Principal**

  > * El caso de uso comienza cuando un usuario quiere registrarse en el sistema.
  > * Se pedirá un nombre de usuario y una contraseña, que se guardarán en un fichero binario.
  > * La comprobación de la contraseña se hará con una comparativa con el fichero binario.

3. **Postcondiciones**

  > * El usuario debe quedar registrado en el sistema.

4. **Flujos alternativos**

  > * Si el nombre de usuario ya está recogido en el sistema, se mostrará un error por pantalla y se volverá a la pantalla de registro.
  > * Si el usuario ya está registrado en el sistema, se le mostrará un error por pantalla indicandole que el nombre de usuario ya está registrado y se vuelve a la pantalla de registro.
