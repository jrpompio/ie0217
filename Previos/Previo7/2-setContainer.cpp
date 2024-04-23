#include <iostream>
#include <set>      // libreria para usar los contenedores de tipo set
using namespace std;
    
    
    
int main() {
    //iniciando un set de tipo int
    set<int> numbers = {1, 100, 10, 70, 100};

    // mostrando el vector
    cout << "Los numeros son: ";
    for (auto &num          // La palabra reservada auto puede ayudar 
                    // Ya que esta detecta el tipo de dato que &num recibe
        : numbers){
        cout << num << ", ";
    }
    cout << endl;

return 0;
}
