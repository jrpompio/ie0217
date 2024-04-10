#include "clases.hpp"
#include <iostream>

Planeta::Planeta(std::string nombre_): nombre(nombre_), cantidadContinentes(0) {};

std::string  Planeta::getNombre() const{
    return nombre;
};

void Planeta::agregarTerritorio(std::string nombreContinente){ 
    if(cantidadContinentes < MAX_CONTINENTES){
        continentes[cantidadContinentes++] = nombreContinente;
        }
        else{
            std::cout << "No se pueden agregar más continentes"
            << std::endl;  
        }
    }

void Planeta::mostrarInfo() const{
    std::cout  << "El planeta " << nombre << " posee "
    << cantidadContinentes << " continentes: ";
    for (int i = 0; i < cantidadContinentes; i++){
    
        if( i > 0 and i != cantidadContinentes - 1) std::cout << ", ";
        if(i == cantidadContinentes - 1) std::cout << " y ";
        std::cout << continentes[i];
    }

    std::cout << std::endl;
};

Continente::Continente(Planeta& planeta_, std::string nombre_){
    planeta_.agregarTerritorio(nombre_);
};

// Continente crearContinente(Planeta& planeta_, std::string nombre_){
//     Continente continente_(planeta_, nombre_);
//     return continente_;
// };