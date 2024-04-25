#include "headerLab5.hpp"
#include <iostream>
#include <algorithm>

using namespace std;

enum opciones{
  AGREGAR_LIBRO = 1,
  MOSTRAR_LIBRO,
  BUSCAR_POR_TITULO,
  SALIR,
  OPCIONES_MAX            // Para saber cuantas opciones se tiene 
};                        // En este caso la maxima cantidad sería 
                          // OPCIONES_MAX - 1, ya que empieza en 1

int main() {
  Biblioteca miBiblioteca;
  string titulo;
  string autor;
  int anioPub;
  std::vector<Libro>::iterator libro;
  int opcion;

  // Agregando Libros default
    miBiblioteca.agregarLibro({"Cien años de soledad", "Gabriel García Márquez", 1967});
    miBiblioteca.agregarLibro({"1984", "George Orwell", 1949});
    miBiblioteca.agregarLibro({"Las ventajas de ser invisible", "Stephen Chbosky", 1999});
    miBiblioteca.agregarLibro({"El Origen Cuántico: Revelaciones en el Reino de los Algoritmos",
                               "Bryan Ganoza", 2023});
    miBiblioteca.agregarLibro({"Prohibido suicidarse en invierno", "indiepunknrock", 2014});
 
  do{
    cout << "Selecciona su opcion: " << endl;
    cout << "1. Agregar un libro " << endl;
    cout << "2. Mostrar todos los libros: " << endl;
    cout << "3. Buscar por titulo: " << endl;
    cout << "4. Salir" << endl;
    cin >> opcion;
    cin.ignore();

  switch (opcion) {
    case AGREGAR_LIBRO:
        cout << "Ingrese el titulo del libro:" << endl;
        getline(cin, titulo);
        cout << "Ingrese el autor del libro:" << endl;
        getline(cin, autor);
        cout << "Ingrese el año de publicación del libro:"
        << endl;
        cin >> anioPub;
        miBiblioteca.agregarLibro(
          {titulo, autor, anioPub}      // Datos para constructor de Libro
                                        // Observar que se introduce en {}
          );
        break;

    case MOSTRAR_LIBRO:
        cout << endl;
        miBiblioteca.ordenarLibrosPorAnio();
        miBiblioteca.mostrarLibros();
        cout << endl;
      break;

    case BUSCAR_POR_TITULO:
        cout << "Ingrese el titulo del libro:" << endl;
        getline(cin, titulo);

        libro = miBiblioteca.buscarLibroPorTitulo(titulo);
        if (libro != miBiblioteca.end()) {
        std::cout << "Libro encontrado: " << libro->titulo << std::endl;
        } else {
        std::cout << "Libro no encontrado." << std::endl;
        }
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