#ifndef HEADERLAB5
#define HEADERLAB5

#include <string>
#include <vector>

class Libro {
  public:
    std::string titulo;
    std::string autor;
    int anioPublicacion;

    Libro(std::string t,
          std::string a,
          int anio);
    bool operator<(const Libro& l) const;
};

class Biblioteca{
  private:
    std::vector<libro> libros;
  public:
    void agregarLibro(const Libro& libro);
    void mostrarLibros();
    void ordenarLibrosPorAnio();
    
}

#endif
