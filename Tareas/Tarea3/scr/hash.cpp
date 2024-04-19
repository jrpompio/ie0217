#include "hash.hpp"
#include <iostream>
#include <cctype>

using namespace std;

HashTable::HashTable(int maxElements_){
    indiceAnterior = 0;
    index = 0;
    ordenada = false;
    maxElements = maxElements_;
    tablaHash = (contacto**) malloc(sizeof(contacto)*maxElements);
    tablaNodos = (Nodo**) malloc(sizeof(Nodo)*maxElements);
    tablaIndices = (int*) malloc(sizeof(int) * maxElements);
     }

HashTable::~HashTable(){
      free(tablaHash);
      free(tablaNodos);
      free(tablaIndices);
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
  tablaIndices[index++] = indice;
  ordenada = false;
}

void HashTable::eliminarElemento(const std::string &nombre, string tipo)
{ 
  if (tipo == "memory"){
  contacto* tempContacto;
  unsigned int indice = hashFunction(nombre);
  tempContacto = tablaHash[indice];
  if (tempContacto->nombre == nombre){
    free(tablaHash[indice]);

  }
  } else if(tipo == "cloud"){
    Nodo* tempNodo;
    unsigned int indice = hashFunction(nombre);
    tempNodo = tablaNodos[indice];
    if (tempNodo->actualContacto.nombre == nombre){
      free(tablaNodos[indice]);
    }
  }


}

void HashTable::mostrarHashTable(){       
  int key;
  Nodo* node;
  contacto* contacto;

  if (index != 0){

  for (int i = 0; i < index; i++){
  key = tablaIndices[i];
  node = tablaNodos[key];
  contacto = tablaHash[key];

  cout << "key result: " << key <<endl;
  cout << "Contacto en almacenamiento" <<endl;
  
  if (contacto->nombre.size() < 1000){
  cout << contacto->nombre
  << " - " << contacto->numero << endl;
  }else{
    cout << "--Vacio--" << endl;
  }

  cout << "Contacto en cloud" <<endl;
  if (node->actualContacto.nombre.size() < 1000){
  cout << node->actualContacto.nombre
  << " - " << node->actualContacto.numero
  << endl << endl; }
  else {
    cout << "--Vacio--" << endl << endl; }
    
  }
  } else {
    cout << "No se han agregado contactos" 
    <<endl<<endl;
  }
}


void HashTable::mostrarContactos()
{
  if(ordenada == false){
    
    int swap = 1;

    while (swap != 0)
    {

    swap = 0;
    for (int i = 0; i < index -1 ; i++){
      
      int item1 = tablaIndices[i];
      int item2 = tablaIndices[i + 1];
      char contactoA = tablaHash[item1]->nombre[0];
      char contactoB = tablaHash[item2]->nombre[0];
      contactoA = tolower(contactoA);
      contactoB = tolower(contactoB);
      
      if (contactoA > contactoB){
        int temp = tablaIndices[i];
        tablaIndices[i] = tablaIndices[i+1];
        tablaIndices[i+1] = temp;
        swap++;

      }
      }
    }

  ordenada = true;
  
  }

    cout << "\nMostrando contactos: " << endl;
    cout << "se muestra de la forma \nnombre - numero "
     << endl << endl;
    
    for (int i = 0; i < index ; i++){
        string nombre = tablaHash[tablaIndices[i]]->nombre;
        int numero = tablaHash[tablaIndices[i]]->numero;

        cout << nombre << " - " << numero << endl;
    }

}
