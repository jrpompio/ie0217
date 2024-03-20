// Manejo de variables locales
#include <iostream>

using namespace std;

// Variable global
int g;

int main(){
    // Variables locales
    
    int a, b;
    
    // Inicializando valores de variables
    a = 100;
    b = 200;
    g = a + b;  // Guardando suma a + b en g
                // La cual es una variable global

    cout << g <<endl;

    return 0;
}