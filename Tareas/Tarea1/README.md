### 1. ¿Cuál es la principal diferencia entre C y C++?
  C++ es un lenguaje de programación basado en C, por lo qué C++ tiene 
  más caracteristicas que C, la principal diferencia es que C++ contiene
  programación orientada a objetos. Existen otras diferencias, en su mayoria,
  C++ tiene más bibliotecas además de las ya heredadas de C.

### 2. Explique el propósito y el uso de los siguientes comandos de Git:
###     git init:
  Este comando sirve para iniciar un repositorio localmente, esto crea 
  los directorios correspondientes a git, como '.git por ejemplo'
  para poder comunicar el repositorio local con un repositorio
  remoto mediante el comando: git remote add origin 'enlace del repositorio'
###     git add: 
  Este comando añade a una lista los archivos que contienen cambios y estan 
  dentro del repositorio local, esta lista corresponde a los archivos
  que están en stage, es decir en una lista de preparación.
###     git commit:
  La lista de preparación anteriormente mencionada es usada por el comando 
  git commit, el cual confirma los cambios realizados, se crea un punto
  al cual se le llama commit, si abstraemos este concepto podemos decir 
  que el commit es el registro de un punto en el tiempo del repositorio. 
  Dicho commit tiene su indentificador de tipo SHA, y un commentario 
  descriptivo sobre los cambios realizados hasta ahora.
###     git push:
  Este comando envia los cambios, los cuales ya tienen un commit, desde el 
  repositorio local hasta el repositorio remoto. 
           el uso completo es: git push 'enlace' 'rama local':'rama remota'
    ya que origin en realidad es la representación de lo que es el enlace
    del repositorio, por lo qué se podrían enviar los archivos locales a una 
    rama de otro repositorio al que se tenga acceso. Por ello existe 'origin'
    como variable de enlace para no romper los repositorios con este comando.
    y por defecto se envian de la rama actual local a su rama remota. 
###     git pull:
  Este comando ejecuta dos comandos, primeramente git fecth para actualizar la
  rama que representa a la rama remota en el local, y después se ejecuta dentro
  de la rama que uno esté situado un git rebase o merge.
  En caso de haber conflicto al traer los cambios desde el remoto, el comando
  git pull devolverá una explicación de como configurar el pull, sea en rebase
  o en merge mediante git config --global pull.rebase true/false, siendo false
  la condición para merge. Sin embargo, es mejor práctica decidir cual hacer,
  en lugar de tener una configuración por defecto.
  Esto se puede ejecutando git pull --rebase/--no-rebase
###     git clone:
  Este comando crea un directorio para el repositorio
  inicializa en ese directorio como git init el repositorio
  configura el remoto, con la variable de enlace origin
  trea los archivos del remoto hacia el local con git pull
  y sincroniza los log para tener los cambios de los commits.
###     git branch:
  Este comando sirve para para gestionar las ramas locales, es decir
  puede crear una rama: git branch 'nombre de la rama'
  eliminar una rama: git branch -d 'nombre de la rama'
  listar las ramas locales e indicar en cual se situa: git branch 
  listar todas las ramas incluyendo las relacionadas al remoto: git branch -a
###     git merge:
  Este comando combina los cambios realizados en dos diferentes ramas, en merge
  los commits de ambas ramas se mantienen y se crea un commit de la unión de 
  las ramas. A diferencia de git rebase que también combina dos ramas pero
  reescribe los commits para presentarlos de una forma más lineal.
### 3. ¿Qué es Git y cuál es su propósito en el desarrollo de software?
### 4. ¿Qué es un conflicto de fusión (merge conflict) en gitignore
### y cómo se resuelve?
### 5. ¿Qué es un archivo .gitignore y para qué se utiliza?
### 6. ¿Qué es una solicitud de extracción (pull request) en GitHub
### y cómo se utiliza?
### 7. ¿Cuáles son las diferencias fundamentales entre
### un lenguaje de programación compilado y uno interpretado?
### Proporcione ejemplos de situaciones en las que sería más óptimo utilizar
### un lenguaje compilado
### y otras en las que sería más adecuado un lenguaje interpretado.
### 8. Explique qué es un linker en el contexto de un lenguaje de 
### programación compilado. ¿Cuál es su función principal 
### y por qué es esencial en el proceso de compilación?
### 9. Describa el flujo de trabajo básico en Git 
### para agregar cambios a un repositorio.
### 10. Defina qué significa inicializar y declarar una variable.
### 11. ¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?
### 12. ¿Qué es un puntero y cómo se utiliza? 
### Explique con un ejemplo de la vida real.
### 13. ¿Qué es un branch (rama) en Git y cómo se utiliza?
### 14. ¿Cuál es la principal diferencia entre un bucle do-while
### y un bucle while?
### 15. Explique por qué es útil y común dividir el código en archivos .hpp,
### .cpp y main.cpp en C++.
### Describa el propósito específico de cada tipo de archivo.
### 16. ¿Dónde y cómo se guardan las variables que se crean en C++?
### Explique la diferencia entre
### el almacenamiento de variables locales y globales.
### 17. ¿Cuál es la diferencia entre pasar parámetros 
### por valor: por referencia y por puntero?
### 18. Cuando se usa un puntero para apuntar a un arreglo en C++,
### ¿a qué valor o dirección apunta inicialmente? 
### Describa cómo sería la forma de acceder a todos los datos de ese arreglo
### mediante el puntero.
### 19. Explique para qué son empleados los punteros dobles en C++.
### Proporcione ejemplos de situaciones en las que los punteros dobles
### son necesarios o beneficiosos.
### 20. ¿Para qué se utiliza la directiva #ifndef?
### 21. ¿Qué es el puntero this en C++?
### 22. ¿Cuál es la diferencia entre un arreglo y una lista en C++?
### 23. ¿Investigue qué es un memory leak?

