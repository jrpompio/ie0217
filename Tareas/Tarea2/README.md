### 1. ¿Qué es la programación orientada a objetos y cuáles son sus principales principios?
    Consiste en programar en mayor nivel, de forma que al representar un objeto
    es más fácil identificar que cualidades de dicho objeto son necesarias atribuir
    para el fin deseado. Sus principios son:
        - Herencia: Objetos pueden heredar carácteristicas de otros objetos
        - Polimorfismo: un mismo metodo puede hacer dos cosas diferentes en
                        diferentes clases de objetos
        - Encapsulamiento: Proteger datos que unicamente pueden ser modificados
                            desde las clases de objetos
        - Abstracción: Se ignoran las cualidades no necesarias del objeto
                        a la hora de ser programado.

### 2. Explique el concepto de ocultamiento de datos y cómo se logra en C++.
        Esto es mediante las secciones de acceso de las clases, puesto que existen
        secciones protegidas y privadas que no son accesibles
        desde cualquier parte del codigo
### 3. ¿Cuál es la diferencia entre una clase y un objeto en C++?
        La clase es el molde, es decir sus atributos aún no han sido proporcionados.
        El objeto necesita tener una clase para ser instanciado.
### 4. ¿Qué es el polimorfismo y cómo se logra en C++?
        El polimorfismo es usar el mismo nombre de metodo para dos objetos diferentes,
        por lo que si tengo un objeto que realiza una acción, y otro objeto derivado del primero
        que a su vez tiene la misma acción puede tener una acción diferente al primero.

### 5. ¿Qué significa el término encapsulamiento en el contexto de la OOP?
        Es la forma de ocultar parámetros en una clase, y ser accedida
        por medio de la clase y sus derivados.
### 6. ¿Cuál es el propósito del constructor y el destructor en una clase de C++?
        El constructor de inicializar parametros del objeto, el destructor ayudará a limpiar
        memoria o cerrar un evento al indicar que dicho objeto ya no es necesario.
### 7. ¿Investigue cómo se define una clase abstracta en C++ y cuál es su función?
### 8. ¿Investigue qué es un constructor de copia y para qué se utiliza en C++?
### 9. ¿Investigue qué es el polimorfismo estático y dinámico en C++ y cómo se diferencian?
### 10. ¿Qué son las clases anidadas y cuál es su utilidad en C++?
        Son funciones que llaman otras funciones dentro de si mismas.
        Por lo que una función necesita a otra para poder funcionar.
### 11. En el contexto de la programación orientada a objetos en C++, ¿cómo se pueden utilizar los punteros para trabajar con objetos y clases? Explique también por qué los punteros a objetos son útiles en la programación orientada a objetos.
### 12. ¿Qué es una función prototipo?
        Es una función que solo contempla las entradas, no que realiza dicha función.
### 13. ¿Explique los diferentes tipos de miembros que existen en la OOP?
        Publico, protegido y privado.
### 14. ¿Qué es un memory leak?
        Es un evento que sucede al no liberar la memoria que se apartó en el programa realizado.
### 15. ¿Qué es y cuál es la importancia de la Herencia multinivel, múltiple y jerárquica de C++?
        Ya que así se pueden heredar carácteristias, pueden ser heredades varias veces
        tener varias herencias y ser heredadas de las que ya heredaron.

### 16. ¿Qué es la composición y cómo se implementa en C++?
### 17. ¿Qué es la sobreescritura de funciones en C++ y cuando es bueno usarla?
        Es cuando se requiere realizar otra acción para la función con el mismo nombre
        dicha acción puede ser parecida a la ya escrita pero se usa cuando la ya existente
        no es suficiente.

### 18. ¿Qué es un método y un atributo y cuál es la diferencia entre ellos?
        Un atributo es una caracteristica que se almacena en un tipo de dato
        mientras que un metodo es una acción propia de la clase. 
### 19. ¿Qué es el constructor y el destructor en una clase?
        El constructor realiza los procedimientos para construir un objeto, y el destructor
        los procedimientos necesarios ya no usar el objeto
### 20. ¿Qué es la sobrecarga de operadores en C++ y cómo se utiliza?
        Esto se da cuando se quiere que un operador funcione con dos objetos,
        pero los objetos no son tipos de datos conocidos para el copilador 
        por lo qué uno debe definir el comportamiento de dicho operador sobreescribiendolo.

        Se usa mediante un metodo que indica que el comportamiento del operador
        dentro de este metodo se debe indicar el operador y al usar dos objetos
        mediante este operador tendrá un comportamiento esperado.
    