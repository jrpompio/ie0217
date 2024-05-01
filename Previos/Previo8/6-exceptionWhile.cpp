#include <iostream>
#include <stdexcept>
using namespace std;

int main() {

  double numerador, denominador, division;
  bool repetir = false;
  do {
    cout << "Ingrese el numerador: ";
    cin >> numerador;

    cout << "Ingrese el denominador: ";
    cin >> denominador;

    try{
      /* Condición para que la instrucción throw 
       * sea ejecutada
       */
      if (denominador == 0)
        // Acá throw usa la función runtime_error
        // que corresponde a la biblioteca stdexcept
        throw runtime_error
        ("Error:" 
         " el denominador no puede ser cero.");
        
      /* Esto se ejecuta si throw no se ejecutó */
      division = numerador / denominador;

      cout << "El resultado de "  
        << numerador << " / " << denominador 
        << " es  " << division << endl;
        repetir = false;
    }
    /* Si try ejecutó throw se ejecutará catch */
    catch (const exception& e){
      // instrucción para ejecutar el mensaje de error
      cerr << e.what() <<endl;
      repetir = true;
        }
      } while (repetir != false);

return 0;
}
