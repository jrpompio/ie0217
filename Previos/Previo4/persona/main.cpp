#include <iostream>
#include "persona.hpp"
#include "persona.cpp"

using namespace std;    
    
int main() {
    Persona p("Juan", 25);

    cout << "Nombre: " << p.getNombre() << endl;
    cout << "Edad: " << p.getEdad() << endl;

return 0;
}
