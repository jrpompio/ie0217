#include <iostream>

using namespace std;

int main(){
     // el valor de una variable se puede cambiar de las siguientes formas
    int var = 5;
    int* pointVar;

    pointVar = &var;
    cout << "var = " << var << endl;
    cout << " *pointVar = " << *pointVar << endl <<endl;
    
    cout << "Cambiando el valor de var " << endl;
    var = 7;
    cout << "var = " << var << endl;
    cout << " *pointVar = " << *pointVar << endl <<endl;
    
    cout << "Cambiando el valor de *pointVar " << endl;
    *pointVar = 16;
    cout << "var = " << var << endl;
    cout << " *pointVar = " << *pointVar <<endl;

    // Errores comunes
    // varPoint = var; es decir dirección = variable, lo cual está mal
    // *varPoint = &var; es decir variable = dirección, lo cual está mal igual
    // 
    // Las formas correctas serían
    // varPoint = &var;
    // *varPoint = var;

return 0;
}
