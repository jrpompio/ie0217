#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include "contacto.hpp"

// Creando prototipos de funciones
// con requisitos mediante la firma de cada función

void agregarContacto(
    Contacto listaContactos[], int &numContactos
);
void mostrarContactos(
    const Contacto listaContactos[], int numContactos
);
void buscarContacto(
    const Contacto listaContactos[], int numContactos
);




#endif