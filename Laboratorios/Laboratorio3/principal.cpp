#include <iostream>
#include <string>

using namespace std;

struct Libro {
  string titulo;
  string autor;
  string genero;
  Libro* siguiente;
};

void agregarLibro(Libro*& lista){
  Libro* nuevoLibro = new Libro;

  cout << "Ingrese el titulo del libro: "
  << endl;
  getline(cin, nuevoLibro->titulo);
  
  cout << "Ingrese el autor del libro: "
  << endl;
  getline(cin, nuevoLibro->autor);

  cout << "Ingrese el genero del libro: "
  << endl;
  getline(cin, nuevoLibro->genero);

  lista = nuevoLibro;

  cout << "Libro agregado correctamente "
  << endl;


};



int main() {

    

return 0;
}