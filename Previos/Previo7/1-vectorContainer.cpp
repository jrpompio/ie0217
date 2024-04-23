#include <iostream>
#include <vector>       // Libreria para usar vector
using namespace std;
    
    
    
int main() {
    //iniciando un vector de tipo int
    vector<int> numbers = {1, 100, 10, 70, 100};

    // mostrando el vector
    cout << "Los numeros son: ";
    for (const int &num     // El tipo de dato que será &num es const int  
                            // que es el tipo de dato de los miembros de este
        : numbers){
        cout << num << ", ";
    }
    cout << endl;

return 0;
}
