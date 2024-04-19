#include "hash.hpp"
#include <iostream>

using namespace std;

HashTable::HashTable(int maxElements_){
    indiceAnterior = 0;
    maxElements = maxElements_;
    tablaHash = (contacto**) malloc(sizeof(contacto)*maxElements);
    tablaNodos = (Nodo**) malloc(sizeof(Nodo)*maxElements);
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
    // cout << "\n" << hash % maxElements <<endl;

    return hash % maxElements;
}

void HashTable::agregarElemento(const std::string &texto,
  const int &numero){
  // Apartado de memoria dinamica para contacto 
  contacto *nuevoContacto = (contacto*)malloc(sizeof(contacto));
  // Apartado de memoria dinamica para nodo
  Nodo *nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
  
  // Declaración de contacto para "copia cloud" hacia el nodo
  contacto nodoContacto;
  nodoContacto.nombre = texto;
  nodoContacto.numero = numero;

  nuevoContacto->nombre = texto;
  nuevoContacto->numero = numero;
  
  nuevoNodo->actualContacto = nodoContacto;

  if (indiceAnterior == 0){
  nuevoNodo->anteriorNodo = nullptr;} 
  else {
  nuevoNodo->anteriorNodo = tablaNodos[indiceAnterior];
  }

  unsigned int indice = hashFunction(texto);
  tablaHash[indice] = nuevoContacto;
  tablaNodos[indice] = nuevoNodo;
  
  // cout << tablaHash[indice]->nombre <<endl;
  // cout << tablaNodos[indice]->actualContacto->nombre <<endl;
  // if (indiceAnterior != 0){
  // cout << tablaNodos[indiceAnterior]->actualContacto->nombre <<endl;
  // }

  indiceAnterior = indice;
}
void HashTable::eliminarElemento(const std::string &nombre)
{ 
  contacto* tempContacto;
  unsigned int indice = hashFunction(nombre);
  tempContacto = tablaHash[indice];
  if (tempContacto->nombre == nombre){
    cout << "\n-----iguales" <<endl;
    free(tempContacto);
  }
}

void HashTable::mostrarElementos()

{
    Nodo* head = tablaNodos[indiceAnterior];

    while (head != nullptr)
    {
    cout << endl <<endl;
    
    auto mostrarNombre = head->actualContacto.nombre;
    cout << mostrarNombre <<endl;
    head = head->anteriorNodo;
    }
    

}
