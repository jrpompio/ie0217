#include "hash.hpp"
#include <iostream>

using namespace std;

enum opciones{
  AGREGAR_CONTACTO = 1,
  MOSTRAR_CONTACTOS,
  MOSTRAR_ALL,
  ELIMINAR_CONTACTO,
  SALIR,
  OPCIONES_MAX 
};

int main() {
HashTable contactsApp(1000); 
string nombre;
int numero;

int opcion;
  
  do
  {
    cout << "\n\nSelecciona su opcion: " << endl;
    cout << "1. Agregar contacto " << endl;
    cout << "2. Mostrar contactos " << endl;
    cout << "3. Mostrar tabla " << endl;
    cout << "4. Eliminar contacto " << endl;
    cout << "5. Salir " << endl;
    cin >> opcion;
    cin.ignore();

    switch (opcion)
    {
      case AGREGAR_CONTACTO:
      cout << "Ingrese el nombre del contacto:";
      getline(cin, nombre);
      cout << "Ingrese el numero del contacto:";
      cin >> numero; 

      contactsApp.agregarElemento(nombre, numero);
      break;

      case MOSTRAR_CONTACTOS:
      contactsApp.mostrarContactos();
      break;

      case MOSTRAR_ALL:
      contactsApp.mostrarHashTable();
      break;

      case ELIMINAR_CONTACTO:

      getline(cin, nombre);
      contactsApp.eliminarElemento(nombre, "cloud");
      break;

      case SALIR:
      cout << "Saliendo del programa..." << endl;
      break;
    
    default:
      cout << "Opcion no permitida" << endl;
      break;
    }

  } while (opcion != SALIR);





return 0;
}