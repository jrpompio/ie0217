#include "EmpleadoAsalariado.hpp"

EmpleadoAsalariado::EmpleadoAsalariado(
    std::string _nombre,
    int _edad,
    double _salario)
: Empleado (
    _nombre,
    _edad,
    _salario) {}


double EmpleadoAsalariado::calcularPago() const {
    return salario;
};


