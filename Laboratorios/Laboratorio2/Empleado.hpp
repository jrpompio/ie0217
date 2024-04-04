#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <string>

class Empleado {
  protected:
    std::string nombre;
    int edad;
    double salario;

  public: 
    Empleado(std::string _string, int _edad, double _salario);
    virtual ~Empleado(){}
    virtual double calcularPago() const = 0; 
    virtual void mostrarDetalles() const;

};


#endif