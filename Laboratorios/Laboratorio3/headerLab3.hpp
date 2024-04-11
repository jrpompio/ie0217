#ifndef CABEZA_H
#define CABEZA_H

#include <string>
using namespace std;


struct Libro {
  string titulo;
  string autor;
  string genero;
  Libro* siguiente;                // Tiene una estructura recursiva donde
};                                 // dentro de la misma estructura se define 
                                   // una estructura del mismo tipo


void agregarLibro(Libro*& lista // Esta firma recibe el elemento que esta 
);                              // siendo referenciado

 

void mostrarLibros(Libro* lista);

void liberarMemoria(Libro*& lista);


#endif