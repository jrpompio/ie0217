#include <iostream>

using namespace std;

class Molde {               // Class ClassName
    public:                 // Especificador de accesor: Publico 
        double largo;       // Elementos de datos de la clase
        double ancho;
        double alto;

        // Creando constructor con introducción de valores
        // para los elementos de datos de la clase
        Molde(double largo_p, double ancho_p, double alto_p ) : 
            largo(largo_p), ancho(ancho_p), alto(alto_p) {}

        double calcularArea(){
            return largo * ancho;
        };

        double calcularVolumen(){
            return largo * ancho * alto;
        };

        ~Molde (){
            cout << "Ya no soy necesario. Chao, cariño, chao" <<endl;
        }

};

int main(){

// Usando clase para crear un objeto pared introduciendo los valores deseados
// para cada elemento de datos de la clase
Molde pared(10.0, 20.0, 35.0);

    cout << pared.largo << endl;     // Mostrando valor pared.largo default 
    pared.largo = 20.0;
    pared.ancho = 13.2;
    pared.alto = 23.4;
    cout << pared.largo             // Mostrando valor pared.largo introducido  
    << endl << endl;

    // Mostrando valor del area con el metodo calcularArea de la clase Molde
    cout << "El area es: " << pared.calcularArea() << endl;  
    // Mostrando valor del area con el metodo calcularVolumen de la clase Molde
    cout << "El volumen es: " << pared.calcularVolumen() << endl;  

return 0;    
}