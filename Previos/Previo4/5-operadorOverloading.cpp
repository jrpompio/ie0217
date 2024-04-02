#include <iostream>
using namespace std;

class Fraccion {
    int numerador, denominador;     
    public:
      Fraccion(int n, int d) : numerador(n), denominador (d) {}

    Fraccion operator-      // Acá se define que operador se sobreescribirá
    (const Fraccion &f)     // Acá se denota con f el segundo objeto para
                            // distinguir los atributos de este.  
    {  
        Fraccion resultado(
            // En el constructor se definió en el primer argumento el numerador
            // así que se realiza la operación del resultado del numerador
            // en esta posición
            numerador * f.denominador - f.numerador * denominador,
            // y de segundo argumento el denominador
            // de la misma manera, la operación del denominador
            // va en esta posición
            denominador * f.denominador      

        );
        return resultado;
    }
    void imprimir (){
        // Metodo para mostrar los atributos de este objeto clase fracción
        cout << numerador << "/" << denominador << endl;
    }
};


int main() {
    Fraccion f1(1,2);
    Fraccion f2(3,4);

    Fraccion f3 = f1 - f2;
    Fraccion f4 = f1 - f2 - f3; // Probando usando dos veces el operador
                                // el resultado debe ser cero

    f3.imprimir();
    f4.imprimir();          // Resultado correcto 0/64 = 0

return 0;
}