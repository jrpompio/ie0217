#ifndef EMPLEADOASALARIADO_HPP
#define EMPLEADOASALARIADO_HPP

#include "Empleado.hpp"

class EmpleadoAsalariado: public Empleado {
  public:
    EmpleadoAsalariado(
    std::string nombre,
    int _edad,
    double _salario);
    double calcularPago() const override;
};

#endif