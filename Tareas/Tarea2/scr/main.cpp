#include "clases.hpp"
#include <iostream>

using namespace std;

int main() {
    Planeta Tierra("Tierra");
    Continente America(Tierra, "America");
    Continente Asia(Tierra, "Asia");
    Continente Africa(Tierra, "Africa");
    Continente Antartida(Tierra, "Antartida");
    Continente Oceania(Tierra, "Oceania");
    // Continente* continentes[MAX_CONTINENTES];

    // for (int i = 0; i < 4; i++)
    // continentes[i] = new Continente(miplaneta, "America");

    Tierra.mostrarInfo();

    // for (int i = 0; i < 4; i++)
    // delete;

    return 0;
}
