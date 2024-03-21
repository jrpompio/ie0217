#include "Funciones.hpp"

void agregarContacto(
// se obtiene las referencias del primer valor de listaContactos
// y la referencia de numContactos
    Contacto listaContactos[], int &numContactos 
){
    Contacto nuevoContacto;
    std::cout << "Ingrese el nombre del contacto: ";
    std::cin >> nuevoContacto.nombre;

    std::cout << "Ingrese el numero de telefono: ";
    std::cin >> nuevoContacto.telefono;

    // Se agrega nuevoContacto al arreglo en el indice actual
    listaContactos[numContactos++] = nuevoContacto;
    // Se aumenta numContactos en 1 después de ser agregado
    
}

void mostrarContactos(
    const Contacto listaContactos[], int numContactos
){
    std::cout << "Lista de contactos: \n";
    for (int i=0; i < numContactos; ++i)
    {
        std::cout << "\nNombre: " << listaContactos[i].nombre 
        << ", Telefono: " << listaContactos[i].telefono << "\n";
    }
}

void buscarContacto(
    const Contacto listaContactos[], int numContactos
){
    std::string nombreBusqueda;
    std::cout << " Ingrese el nombre a buscar: ",
    std::cin >> nombreBusqueda;
    bool encontrado = false;
    for (int i =  0; i < numContactos; i++){
       if(listaContactos[i].nombre == nombreBusqueda){

        std::cout << "\nNombre: " << listaContactos[i].nombre
         << ", Telefono; " << listaContactos[i].telefono << "\n";
        encontrado = true;
        break;
        }
        if (!encontrado){
            std::cout << "Contacto no encontrado";
        }
    }
}