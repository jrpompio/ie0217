#include "headerLab3.hpp"
#include <iostream>
using namespace std;


void agregarLibro(Libro*& lista){            

  Libro* nuevoLibro = new Libro;    // Se crea un espacio en memoria para el
                                    // elemento nuevo

  cout << "Ingrese el titulo del libro: "
  << endl;
  
  cin.ignore();           // Limpia el buffer de cin para poder usar cin
                          // sin errores

  getline(cin, nuevoLibro->titulo);

  cout << "Ingrese el autor del libro: "
  << endl;
  getline(cin, nuevoLibro->autor);  

  cout << "Ingrese el genero del libro: "
  << endl;

  getline(cin, nuevoLibro->genero);

  nuevoLibro->siguiente = lista;   // Una vez agregado el libro, se usa 
                                   // un nuevo espacio de esta estructura
                                   // para el siguiente libro

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
      lista = lista->siguiente;               // Se apunta al siguiente libro
                                              // ya almacenado
  }}
}

void liberarMemoria(Libro*& lista){
  while(lista != nullptr){
    Libro* temp = lista;            // toma el espacio para la estructura
                                    // ya creada
    lista = lista->siguiente;       // toma la siguiente lista hacia lista
    delete temp;                    // borra el espacio en memoria de 
                                    // la lista extraida
  }
}