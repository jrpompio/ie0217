#include <iostream>
#include <cstdlib>
using namespace std;
    
    

int main() {

// malloc

    // Destinando memoria del tamaño de int a un puntero tipo int
    
    int* ptrM = (int*)      // se le debe hacer casting al tipo dato deseado
    malloc( sizeof(int)   // <-- acá se introduce el tamaño de memoria en bytes
          );                        // Se le asigna el tamaño del entero con 
                                   // la función sizeof

    *ptrM = 5;                      // Asignando valor a memoria reservada
                                   // por medio de referencia
    cout << *ptrM << endl << endl;
    
    free(ptrM);

// calloc
    int *ptrC;                  // Se inicializa un puntero para el calloc

    ptrC = (int *)              // Se debe hacer casting al tipo deseado
        calloc( 5,              // <-- acá va la cantidad de elementos
                sizeof(int)     // <-- acá el tamaño en bytes de esos elementos
        );
    if (!ptrC){                  // Si no es un valor valido

        cout << "Memory Allocation Failed"
        << endl;
       
        exit(1);                  // Se devuelve un 1 en exit
                                  // que le indica error al sistema
    }
    cout << "Initializing values..." << endl << endl;
    for (int i = 0; i <  5; i++){

        ptrC[i] = i * 2 + 1;          // Asignando valores a memoria apartada
    }
    cout << "Initialized values..." << endl;
    for(int i = 0; i < 5; i++){
   
        cout << "*(ptrC + i): "      // Se muestran dos formas de operar
            << *(ptrC + i)           // con los valores de memoria 
            << endl;                 // designados mediante calloc
        cout << "ptrC[i]: "         
            << ptrC[i] 
            << endl << endl;
    }
    
free(ptrC);

return 0;
}
