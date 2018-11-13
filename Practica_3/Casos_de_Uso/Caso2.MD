## Guardar clase

**ID: 02 **
**Breve Descripción: Almacenar información con respeto a las clases**

---

**Actores principales: Usuario**
**Actores secundarios: Clase**

1. **Precondiciones**

  > * La clase debe existir.

2. **Flujo Principal**

  > * El caso de uso da comienzo cuando se necesita guardar una clase.
  > * El sistema recoge los datos y guarda una clase en un fichero binario.


3. **Postcondiciones**

  > * La información de la clase debe estar almacenada en un fichero binario.

4. **Flujos alternativos**

  > * Si una clase no se puede guardar, se imprimirá un error por pantalla, tras lo cual se volverá al menú principal.
  > * Si una clase no se puede encontrar entre los ficheros, se imprimirá un error por pantalla.
  > * Si se introduce un nombre de fichero que tiene un fichero ya existente, el sistema sobreescribirá la información en dicho fichero.
