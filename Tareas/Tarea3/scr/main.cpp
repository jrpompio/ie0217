#include "hash.hpp"
#include <iostream>

using namespace std;

int main() {
HashTable contactsApp(1000);    
contactsApp.agregarElemento("Jurgen", 123);
contactsApp.agregarElemento("Bunstrangle", 44);
contactsApp.agregarElemento("Junior", 23132);
return 0;
}