#include <iostream>
#include "contacto.hpp"
#include "Funciones.hpp"
#include "Funciones.cpp"

#define MAX_CONTACTOS 100

enum Opciones {

    AGREGAR = 1,
    MOSTRAR,
    BUSCAR,
    SALIR

};

int main(){

    Contacto listacontactos[MAX_CONTACTOS];

    int numContactos = 0;
    int opcion;

        // Dowhile para ejecutar al menos una vez
    do {  
        std::cout << "\nMenu:\n";
        std::cout << "1. Agregar Contacto\n";
        std::cout << "2. Mostrar Contacto\n";
        std::cout << "3. Buscar Contacto\n";
        std::cout << "4. Salir\n";
        std::cout << "Ingrese su opción \n";
        std::cin  >> opcion;

        // switch para manejar el menú 

        switch (opcion){
          case AGREGAR:      // uso de la referencia enum en lugar del valor
            agregarContacto(listacontactos, numContactos);
        
            break;
          case MOSTRAR:
            mostrarContactos(listacontactos, numContactos);
            break;
          case BUSCAR:
            buscarContacto(listacontactos, numContactos);
            break;
          case SALIR:
            std::cout << "Saliendo del programa... \n";
            break;

          default:
            std::cout << "Opcion no valida. Intente de nuevo.. \n";
            std::cin  >> opcion;
            break;
        }


    } while (opcion != SALIR);   // condicion relativa al valor de opción


return 0;  

}