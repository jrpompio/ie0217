#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

class Persona {
    private:
        string nombre;   // Para el header file se deben declarar los atributos
        int edad;
    public:
    // además se deben realizar los prototipos de los métodos
        Persona(string nombre, int edad);
        string getNombre();
        int getEdad();
        void setEdad(int edad);
        

};

#endif
