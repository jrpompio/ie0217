#ifndef PLANETA_H
#define PLANETA_H

#include <string>

#define MAX_CONTINENTES 5
#define MAX_PAISES 200

class Planeta {
    private:
      std::string nombre;
      std::string continentes[MAX_CONTINENTES];
      std::string paises[MAX_PAISES];

      int cantidadContinentes;
      int cantidadPaises;
      int cantidadPaisesAsia;
      int cantidadPaisesAmerica;
      int cantidadPaisesAfrica;
      int cantidadPaisesEuropa;
      int cantidadPaisesOceania;
      
      bool aeropuertoEnAsia;
      bool aeropuertoEnAmerica;
      bool aeropuertoEnAfrica;
      bool aeropuertoEnEuropa;
      bool aeropuertoEnOceania;

      std::string getNombre() const;

    public:
      Planeta(std::string nombre);
      void mostrarInfo() const;
      void agregarTerritorio(std::string nombreContinente);

};

class Continente /*: public Planeta*/  {
  public:
    Continente(Planeta& planeta_, std::string nombreContinente);
};

class Pais : public Continente {
  public:
    //Pais(Planeta& planeta_, std::string nombreContinente);
};

class PaisPrimerMundo : public Pais {
};

class PaisEnDesarrollo : public Pais {
};

// Funciones

// Continente crearContinente(Planeta& planeta, std::string nombre_);




#endif