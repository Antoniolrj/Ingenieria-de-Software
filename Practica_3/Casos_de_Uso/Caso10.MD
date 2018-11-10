## Límite de alumnado

**ID: 10**
**Breve Descripción: Disponibilidad de almacenamiento de los alumnos**

---

**Actores principales: Usuario**
**Actores secundarios: Sistema**

1. **Precondiciones**

  > El sistema deberá guardar los alumnos.
  > El sistema deberá guardar las clases

2. **Flujo Principal**

  > El caso de uso se da con el propio uso del sistema. El sistema no podrá guardar más de 150 alumnos por clase.

3. **Postcondiciones**

  > El sistema respetará la restricción de almacenamiento.
  > El sistema mostrará un mensaje para indicar que una clase está llena.

4. **Flujos alternativos**

 > Si no se pueden guardar menos de 150 alumnos en una clase, el sistema imprimirá un mensaje de error por pantalla.
