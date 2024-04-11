#include <iostream>
#include <string>

using namespace std;

struct Libro {
  string titulo;
  string autor;
  string genero;
  Libro* siguiente;                
};

enum opciones{
  AGREGAR_LIBRO = 1,
  MOSTRAR_LIBRO = 2,
  SALIR = 3,
  OPCIONES_MAX                         // Para saber cuantas opciones se tiene 
};

void agregarLibro(Libro*& lista){            // 

  Libro* nuevoLibro = new Libro;            //

  cout << "Ingrese el titulo del libro: "
  << endl;
  
  cin.ignore();

  getline(cin, nuevoLibro->titulo);

  cout << "Ingrese el autor del libro: "
  << endl;
  getline(cin, nuevoLibro->autor);  

  cout << "Ingrese el genero del libro: "
  << endl;

  getline(cin, nuevoLibro->genero);

  nuevoLibro->siguiente = lista;

  lista = nuevoLibro;

  cout << "Libro agregado correctamente "
  << endl;

}

void mostrarLibros(Libro* lista){
  if(lista == nullptr){
    cout << "La libreria no tiene libros."
    << endl << endl;
  } else{

  cout << "\nLista libros: " << endl;
  while (lista != nullptr){
      cout << "Titulo: " << lista->titulo << endl;
      cout << "Autor: " << lista->autor << endl;
      cout << "Genero: " << lista->genero 
      << endl << endl;
      lista = lista->siguiente;               // Comentar
  }}
}

void liberarMemoria(Libro*& lista){
  while(lista != nullptr){
    Libro* temp = lista;
    lista = lista->siguiente;
    delete temp;
  }
}


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
  
 liberarMemoria(listaLibros);   

return 0;
}