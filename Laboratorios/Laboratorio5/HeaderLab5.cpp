#ifndef HEADERLAB5
#define HEADERLAB5

#include <string>

class Libro {
  public:
    std::string titulo;
    std::string autor;
    int anioPublicacion;

    Libro(std::string t,
          std::string a,
          int anio);
};

#endif
