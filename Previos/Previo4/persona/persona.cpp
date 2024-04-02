#include "persona.hpp"
using namespace std;

// En el cpp se deben completar los prototipos de los metodos generados
// en el header file, accediendo a los metodos de la clase mediante 
// Persona:: 

Persona::Persona(string nombre, int edad){
    this->nombre = nombre;          // this->atributo (se refiere al dato 
                                    // propio de la clase) = dato introducido 
    this->edad = edad;              
}

string Persona::getNombre(){
    return nombre;
}

int Persona::getEdad(){
    return edad;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}
