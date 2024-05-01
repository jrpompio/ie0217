#include <iostream>
using namespace std;
    
    
    
int main() {

    double numerador, denominador, division;

    cout << "Ingrese el numerador: ";
    cin >> numerador;

    cout << "Ingrese el denominador: ";
    cin >> denominador;

    try{
      /* Condición para que la instrucción throw 
       * sea ejecutada
       */
      if (denominador == 0)
        throw 0;
        
      /* Esto se ejecuta si throw no se ejecutó */
      division = numerador / denominador;
      cout << numerador << " / " << denominador << " = " << division << endl;
    }
    /* Si try ejecutó throw se ejecutará catch */
    catch (int excepcionCero){
      cout << "Error: NO se puede dividir entre " << excepcionCero << endl;
    }
return 0;
}
