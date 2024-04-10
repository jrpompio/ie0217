#include "clases.hpp"
#include <iostream>

using namespace std;

    enum Opciones {

    MOSTRAR = 1,
    COMPARAR,
    AGREGAR,
    ELIMINAR,
    SALIR

};

int main() {
    Planeta Tierra("Tierra");
    Continente America(Tierra, "America");
    Continente Asia(Tierra, "Asia");
    Continente Africa(Tierra, "Africa");
    Continente Antartida(Tierra, "Antartida");
    Continente Oceania(Tierra, "Oceania");

    int opcion;

        // Dowhile para ejecutar al menos una vez
    do {  
        std::cout << "\nMenu:\n";
        std::cout << "1. Mostrar información del planeta\n";
        std::cout << "2. Comparar paises\n";
        std::cout << "3. Agregar pais\n";
        std::cout << "4. Eliminar pais\n";
        std::cout << "5. salir\n";
        std::cout << "Ingrese su opción:  \n";
        std::cin  >> opcion;

        // switch para manejar el menú 

        switch (opcion){

           case MOSTRAR:
                Tierra.mostrarInfo();
           break;
           case COMPARAR:
           break;
           case AGREGAR:
           break;
           case ELIMINAR:
           break;
           case SALIR:
           break;
          default:
            std::cout << "Opcion no valida. Intente de nuevo.. \n";
            break;
        }


    } while (opcion != SALIR);   // condicion relativa al valor de opción


    return 0;
}
