#include "hash.hpp"
#include <iostream>

using namespace std;

int main() {
HashTable contactsApp(1000);    
contactsApp.agregarElemento("roinuj", 1234);
contactsApp.agregarElemento("Bunstrangle", 4444);
contactsApp.agregarElemento("Junior", 91271231);
contactsApp.mostrarElementos();
contactsApp.eliminarElemento("Bunstrangle");
contactsApp.mostrarElementos();

return 0;
}