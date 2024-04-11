#include <iostream>
#include "headerLab3.hpp"

using namespace std;


enum opciones{
  AGREGAR_LIBRO = 1,
  MOSTRAR_LIBRO = 2,
  SALIR = 3,
  OPCIONES_MAX            // Para saber cuantas opciones se tiene 
};                        // En este caso la maxima cantidad sería 
                          // OPCIONES_MAX - 1, ya que empieza en 1

int main() {
  Libro* listaLibros = nullptr;
  int opcion;
  
  do
  {
    cout << "Selecciona su opcion: " << endl;
    cout << "1. Agregar un libro " << endl;
    cout << "2. Mostrar todos los libros: " << endl;
    cout << "3. Salir" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case AGREGAR_LIBRO:
      agregarLibro(listaLibros);
      break;

    case MOSTRAR_LIBRO:
      mostrarLibros(listaLibros);
      break;

    case SALIR:
      cout << "Saliendo del programa..." << endl;
      break;
    
    default:
      cout << "Opcion no permitida" << endl;
      break;
    }

  } while (opcion != 3);
  
 liberarMemoria(listaLibros);   // IMPORTANTE, se borra la lista creada

return 0;
}