#include <iostream>
using namespace std;

class Animal{                       // Declarando clase animal

    public:                         // acceso publico: fuera de la clase se   
                                    // puede acceder a atributos de esta sección

        void setEdad(int age) {     // metodo para escoger edad del animal
            edad = age;
        }
        int gedEdad() {             // metodo para obtener edad del animal
            return edad;
        }

    protected:                      // acceso protegido: las clases hijas pueden
                                    // acceder a esta sección
        string nombre;
    
    private:                        // acceso privado: Solo la misma clase puede
                                    // acceder a esta sección
        int edad;

};

class Perro : public Animal {       // Clase derivada de clase animal: Perro

    public:                             
        void setNombre(string n) {      // Acá accede al atributo "nombre" 
            nombre = n;                 // que está en sección protegida de la 
        }                               // clase madre Animal
        string getNombre(){
            return nombre;
    }
                                        // Algo que no se puede hacer, seria 
    // Perro(){                         // acceder al atributo "edad"
    //     cout << edad <<endl;         // El cual está en la sección de acceso
    // }                                // privado de la clase madre.
};                                      // Si se descomenta este segmento de
                                        // codigo, da el siguiente error:
                                        // ‘int Animal::edad’ is private

int main() {

    Perro miPerro;                      // Objeto de clase Perro
    miPerro.setNombre("Tobias");       // Metodo de la clase Perro
    miPerro.setEdad(20);               // Metodo de la clase Animal

    // Obteniendo nombre mediante metodo de la clase perro
    cout << "Mi perro se llama: "  << miPerro.getNombre() << endl;
    // Obteniendo edad mediante meteodo de la clase animal
    cout << "y tiene: "  << miPerro.gedEdad() << " años perro" << endl;

return 0;
}

