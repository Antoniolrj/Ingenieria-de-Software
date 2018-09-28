#**Comandos GitHub**

1. Añadir repositorio remoto

 *git remote add origin* [url]

2. Ver repositorios remotos

 *git remote -v*

3. Eliminar repositorio remoto

 *git remote rm origin*

4. Añadir cambios del repositorio local al remoto

 *git push -u origin master*

5. Añadir cambios del repositorio remoto al local

 *git pull*

6. Ver branches remotos

 *git branch -r*

7. Ver todos los branches

 *git branch -a*

8. Clonar un repositorio remoto

 *git clone* [url]

##**Dar seguimiento a branches remotos**

1. LOCAL -> REMOTO

 *git push*

2. REMOTO -> LOCAL

 - Sincronización y unión

 *git fetch origin*

 *git merge origin/master*

 - En un solo paso

 *git pull*

##**Operaciones con braches remotos**

1. Creación

 *git push -u origin* [branch_remoto]

2. Copia

 *git checkout -b* [local] [remoto]

3. Eliminación

 *git push origin --delete* [branch_remoto]
