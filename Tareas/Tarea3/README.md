### Para copilar
        make

### 1. ¿Qué es un algoritmo y cuáles son sus caracterı́sticas principales?
    Un algoritmo es un conjunto de instrucciones paso a paso que describe cómo realizar una tarea específica. Sus características principales incluyen claridad, precisión, finitud, efectividad y generalidad.

### 2. Explica la diferencia entre un algoritmo eficiente y uno ineficiente.
    Un algoritmo eficiente es aquel que utiliza recursos como tiempo y memoria de manera óptima para resolver un problema en un tiempo razonable, incluso para entradas grandes. 
    Uno ineficiente es lo contrario.
### 3. ¿Qué es una estructura de datos y por qué son importantes?
    Las estructuras de datos son formas de organizar datos para un uso eficiente en computadoras. Son importantes porque afectan directamente el rendimiento de los programas.
### 4. Describe las diferencias entre una estructura de datos estática y una dinámica.
    Una estructura de datos estática tiene un tamaño fijo y predefinido en tiempo de compilación, lo que significa que no puede cambiar durante la ejecución del programa. En cambio, una estructura de datos dinámica puede cambiar de tamaño durante la ejecución del programa, ya que su tamaño se ajusta dinámicamente según sea necesario.    
### 5. ¿Qué es la memoria dinámica y cómo se gestiona en lenguajes de programación como
### C++, explique las operaciones que se pueden realizar?
    La memoria dinámica es un área de la memoria que se asigna y libera manualmente durante la ejecución de un programa. En C++, se gestiona mediante operadores como new y delete o malloc() y free().

    La operación new se utiliza para asignar memoria para un objeto en el heap.
    La operación delete se utiliza para liberar la memoria asignada previamente con new.
    malloc() se utiliza para asignar memoria y free() para liberarla, pero en C es necesario hacer un cast al tipo de dato que se espera recibir.
    realloc() se utiliza para cambiar el tamaño de la memoria previamente asignada.
### 6. ¿Cuáles son las ventajas y desventajas de la memoria dinámica en comparación con la
### memoria estática?
    Las ventajas de la memoria dinámica incluyen:

    Flexibilidad: Permite asignar y liberar memoria durante la ejecución del programa según sea necesario.
    Eficiencia en el uso de memoria: La asignación y liberación de memoria pueden adaptarse dinámicamente, lo que puede reducir el desperdicio de memoria.
    Las desventajas de la memoria dinámica incluyen:

    Mayor complejidad: Requiere una gestión manual de la memoria, lo que puede aumentar la complejidad del código y la posibilidad de errores.
    Riesgo de errores: La gestión incorrecta de la memoria puede causar problemas como fugas de memoria o accesos a memoria no válidos, lo que puede ser difícil de depurar.
    Posible fragmentación de la memoria: A medida que se asigna y libera memoria de manera dinámica, puede ocurrir fragmentación de la memoria, lo que puede reducir la eficiencia y conducir a problemas de rendimiento.
### 7. Explique qué es un árbol binario y cuáles son sus principales caracterı́sticas.
    Un árbol binario es una estructura de datos jerárquica donde cada nodo tiene como máximo dos hijos, conocidos como hijo izquierdo y hijo derecho. Sus principales características incluyen:
        Raíz: El nodo superior del árbol.
        Hoja: Un nodo sin hijos.
        Nodo interno: Un nodo que tiene al menos un hijo.
        Subárbol: Un árbol formado por un nodo y todos sus descendientes.
        Altura: La longitud del camino más largo desde la raíz hasta una hoja.
### 8. ¿Qué es una cola (queue) y en qué situaciones se utiliza comúnmente?
        Una cola es una estructura de datos que sigue el principio FIFO (First In, First Out), lo que significa que el primer elemento en ser insertado es el primero en ser eliminado. Se utiliza comúnmente en situaciones donde los elementos deben ser procesados en el mismo orden en que llegaron, como en la gestión de solicitudes en un servidor o en la impresión de trabajos en una impresora.
### 9. ¿Cuál es la diferencia entre una cola (queue y una pila (stack)?
        En una cola, el primer elemento que se inserta es el primero en ser eliminado (FIFO), mientras que en una pila, el último elemento que se inserta es el primero en ser eliminado (LIFO).
        Las operaciones en una cola son enqueue para agregar un elemento al final y dequeue para eliminar un elemento del principio. En una pila, las operaciones son push para agregar un elemento en la parte superior y pop para eliminar un elemento de la parte superior.
### 10. Describe cómo funciona el algoritmo de inserción (insert) en una tabla hash.
    El algoritmo de inserción en una tabla hash implica calcular el hash de la clave del elemento, resolver colisiones (si las hay) y luego insertar el elemento en la ubicación determinada por el hash. La eficiencia depende de la función de dispersión y la técnica de resolución de colisiones.
### 11. ¿Qué es la función de dispersión (hash function) y por qué es importante en las tablas
### hash?
        La función de dispersión, o hash function, es una función que convierte una clave en una ubicación en una tabla hash. Es importante en las tablas hash porque determina dónde se almacenarán y buscarán los elementos en la tabla. Una buena función de dispersión distribuirá uniformemente los elementos en la tabla, minimizando las colisiones y optimizando el rendimiento de las operaciones de inserción, búsqueda y eliminación.
### 12. ¿Cuál es la complejidad temporal promedio de búsqueda en una tabla hash bien im-
### plementada?
    La complejidad temporal promedio de búsqueda en una tabla hash bien implementada es O(1), es decir, constante.
### 13. Explica cómo se realiza la operación de inserción (push) en una pila (stack).
    La operación de inserción en una pila, "push", simplemente agrega un nuevo elemento en la parte superior de la pila. Esto implica ajustar el puntero de la parte superior y almacenar el nuevo elemento allí.
### 14. ¿Cuál es la complejidad temporal de las operaciones de apilar (push) y desapilar (pop)
### en una pila?
        La complejidad temporal de las operaciones de apilar (push) y desapilar (pop) en una pila implementada como un arreglo es O(1), es decir, constante. En una pila implementada como una lista enlazada, la complejidad también es O(1) para ambas operaciones.
### 15. Describe cómo funciona una lista enlazada y cuáles son sus ventajas y desventajas.
        Una lista enlazada es una estructura de datos donde cada elemento, llamado nodo, contiene un valor y una referencia al siguiente nodo en la secuencia. Sus ventajas incluyen inserción y eliminación eficientes en cualquier posición, mientras que sus desventajas incluyen un mayor consumo de memoria debido a los punteros y un acceso secuencial menos eficiente.
### 16. ¿Qué es un nodo en una lista enlazada y qué contiene?
    Un nodo en una lista enlazada es una estructura de datos que contiene un valor y un puntero que apunta al siguiente nodo en la secuencia.
### 17. ¿Cuál es la diferencia entre una lista enlazada simple y una lista enlazada doblemente
### enlazada?
    Un nodo en una lista enlazada es una estructura de datos que contiene un valor y un puntero que apunta al siguiente nodo en la secuencia.
### 18. ¿Cómo se realiza la eliminación (delete) de un nodo en una lista enlazada?
    Para eliminar un nodo en una lista enlazada, se actualizan los punteros del nodo anterior y el nodo siguiente para que apunten entre sí, evitando así el nodo que se va a eliminar. Si el nodo a eliminar está en el medio de la lista, es necesario ajustar los punteros del nodo anterior y del nodo siguiente para que se enlacen correctamente. Si el nodo a eliminar es el primero o el último, se actualizan los punteros de encabezado o de cola, respectivamente.
### 19. Explica cómo funciona el algoritmo de recorrido (traversal) en un árbol binario.
        El algoritmo de recorrido en un árbol binario visita todos los nodos del árbol de una manera específica. Hay tres tipos principales de recorridos:
        En preorden: Visita el nodo raíz, luego recorre el subárbol izquierdo y finalmente recorre el subárbol derecho.
        En orden: Recorre el subárbol izquierdo, luego visita el nodo raíz y finalmente recorre el subárbol derecho.
        En postorden: Recorre el subárbol izquierdo, luego recorre el subárbol derecho y finalmente visita el nodo raíz.
### 20. ¿Cuál es la complejidad temporal del recorrido en preorden, en orden y en postorden
### en un árbol binario balanceado?

        En un árbol binario balanceado, la complejidad temporal de los recorridos en preorden, en orden y en postorden es O(n), donde "n" es el número de nodos en el árbol. Esto se debe a que cada nodo se visita exactamente una vez en cada recorrido.

### 21. Explique la diferencia entre la notación Big O (O) y la notación Omega () en el análisis
### de la complejidad temporal de los algoritmos. Proporciona un ejemplo de un algoritmo
### y determina su complejidad temporal utilizando ambas notaciones Big O y Omega.
        La notación Big O (O) describe el peor caso de complejidad temporal de un algoritmo, es decir, el límite superior en el tiempo de ejecución. Por otro lado, la notación Omega () describe el mejor caso de complejidad temporal, es decir, el límite inferior en el tiempo de ejecución.