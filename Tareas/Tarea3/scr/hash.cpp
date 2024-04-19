#include "hash.hpp"
#include <iostream>

using namespace std;

HashTable::HashTable(int maxElements_){
    maxElements = maxElements_;
    tablaHash = (contacto**) malloc(sizeof(contacto)*maxElements);

     }

HashTable::~HashTable(){
      free(tablaHash);
  cout << "\n\nMi nombre es Angron el destructor" << endl;
}

unsigned int HashTable::hashFunction(const std::string &texto)
{  unsigned int hash = 0;
    for (char j : texto){
        hash = ((hash << 5)-hash) + j;
    }
    cout << "\n" << hash % maxElements <<endl;

    return hash % maxElements;
}

void HashTable::agregarElemento(const std::string &texto,
  const int &numero){
  contacto* nuevoContacto = (contacto*)malloc(sizeof(contacto));
  nuevoContacto->nombre = texto;
  nuevoContacto->numero = numero;
  nuevoContacto->siguiente = nullptr;

  unsigned int indice = hashFunction(texto);
  
  nuevoContacto->siguiente = tablaHash[indice];
  tablaHash[indice] = nuevoContacto;

  
  cout << tablaHash[indice]->nombre <<endl;
}
void HashTable::eliminarElemento(const std::string &nombre)
{
}

void HashTable::mostrarElementos()
{
}
