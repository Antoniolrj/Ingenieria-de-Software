# CONFIGURACIÓN BÁSICA: COMANDOS DE GIT


## CONFIGURACIÓN BÁSICA

- Nombre del Administrador:

> git config --global user.name "Nombre y apellidos de la persona"

- Correo Electrónico:

> git config --global user.email "Correo electrónico de la persona en cuestión"

- Editor de texto:

> git config --global core.editor "Nombre del editor de texto favorito a usar"

- Color de la interfaz

> git config --global color.ui true  /*Activa los colores de la terminal para git

- Listado de la configuración:

> git config --list

### Comandos básicos I

- Iniciar un repositorio en un directorio

> git init

- Agregar cambios al area de staging

> git add

- Validar cambios en el repositorio

> git commit -m "Mensaje"

- Hacer los dos pasos anteriores en uno

> git commit -am "Mensaje"

- Historial de commits

> git log

### Comandos básicos II

- Ayuda del listado anterior:

> git help log

- Listar los 5 commits más recientes:

> git log -n 5

- Listar los commits desde una fecha

> git log --since=año-mes-día /*Se indica la fecha con los guiones respectivos

- Listar los commits por autor

> git log --author="Nombre del autor"

- Ver cambios en el directorio

> git status

### Comandos básicos III

- Ver diferencia entre ficheros en el directorio y el repositorio GIT

> git diff

- Ver diferencia entre ficheros en el staging y el repositorio

> git diff --staged

- Eliminar archivos

> git rm "nombre del archivo"  /*A usar sin las comillas
> git commit -m "Mensaje"

- Mover o renombrar archivos

> git mv "fuente del archivo" "destino del archivo" /*A usar los enlaces sin comillas
> git commit -m "Mensaje"

- Deshacer cambios con git


### Comandos básicos IV

- Deshacer cambios con git

> git checkout -- nombre_fichero

- Retirar archivos del staging

> git reset HEAD nombre_fichero

- Complementar último commits

> git commit --amend -m "Mensaje"

- Recuperar versión de un fichero de commit antiguo

> git checkout <id_commit> --nombre_archivo

- Revertir un commit

> git rever <id_commit>

### Comandos básicos V

- Deshacer múltiples cambios en el repositorio

> git reset --soft <id_commit>
> git reset --mixed <id_commit>
> git reset -- hard <id_commit>

- Listar archivos que git no controla

> git clean -n

- Eliminar archivos que git no controla

> git clean -f

- Ignorar archivos en el repositorio

> .gitignore /*Es un documento en el cual pondremos los nombres de los archivos en git que tengamos y que queremos ignorar


### Comandos básicos VI

- Listar el contenido del repositorio de git:

> git ls-tree master
> git ls-tree master^^^
> git ls-tree master^3

- Log en una línea

> git log --oneline

- Log con los tres últimos commits en una línea

> git log --oneline -3

### Comandos básicos VII

- Examinar el contenido de un commit

> git show <id>

- Comparar un commit con el actual

> git diff <id> nombre_archivo

- Comparar dos commits

> git diff id..id nombre_archivo

## Ramas o branches
*Es la forma para separar la línea actual de desarrollo con respecto a la principal. Normalmente representan versiones oficiales del software que posteriormente están integradas a la línea principal*


### Comandos Rama I

- Ver listado de ramas

> git branch

- Crear una rama

> git branch nombre_rama

- Cambiarnos a una rama

> git checkout nombre_rama

- Crear una rama y moverse en un pasos

> git checkout -b nombre_rama

- Comparar ramas

> git diff nombre_rama..nombre_rama


### Comandos Rama II

- Ver ramas idénticas a la actual

> git branch --merged

- Renombrar Ramas

> git branch -m nombre_antiguo nombre_nuevo

- Eliminar ramas

> git branch -d nombre_rama
> git branch -D nombre_rama

- Integrar ramas a la actual

> git merge nombre_rama

- Resolver conflictos (se suele hacer manualmente)

> git merge --abort
---
### Comandos Rama III

- Almacenar cambios temporales

> git stash save "Mensaje"

- Listar cambios

> git stash list

- Ver contenido de un cambio temporal

> git stash show -p nombre_stash

- Eliminar un cambio temporales

> git stash drop nombre_stash

- Aplicar cambio del nombre_stash

> git stash apply nombre_stash
> git stash pop nombre_stash

### Comandos Github I

- Añadir repositorio remoto

> git remote add origin url

- Ver repositorio remotos

> git remote -v

- Eliminar repositorio remoto

> git remote rm origin

- Añadir cambios del repositorio local al remoto

> git push -u origin master

- Añadir cambios del repositorio remoto al local

> git pull

### Comandos Github II

- Ver branches remotos

> git branch -r

- Ver todos los branches

> git branch -a

- Clonar un repositorio remoto

> git clone url

## Dar seguimiento a branches remotos

* Local -> Remoto
  - Cambios en el repositorio local
  - Commit de los cambios
  - Añadir cambios a repositorio remoto:
    > git push
- Remoto -> local
  - Sincronización y unión:
    > git fetch origin
    > git fetch origin/master
  - En un solo paso:
    > git pull

## Operaciones con branches remotos

* Creación:
  - Crear branch local
  - Hacer cambios en dicho branch
  - Hacer commit
  - Copiar el branch al repositorio remoto
    > git push -u origin branch_remoto
* Copia:
  > git checkout -b local remoto
* Eliminación:
  > git push origin --delete branch_remoto
