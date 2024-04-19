#include "hash.hpp"
#include <iostream>

using namespace std;

HashTable::HashTable(int maxElements_){
    maxElements = maxElements_;
    contacto* tablaHash[maxElements] = {nullptr};}

int HashTable::hashFunction(const std::string &texto)
{   int hash = 0;
    for (char j : texto){
        hash = hash + j;
    }
    cout << "\n" << hash <<endl;
    cout << "\n" << hash % maxElements <<endl;

    return hash % maxElements;
}

void HashTable::agregarElemento(const std::string &texto, const int &numero)
{
    hashFunction(texto);
}

void HashTable::eliminarElemento(const std::string &nombre)
{
}

void HashTable::mostrarElementos()
{
}
