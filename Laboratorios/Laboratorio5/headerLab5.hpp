#ifndef HEADERLAB5
#define HEADERLAB5

#include <string>
#include <vector>

class Libro {
  public:
    // Atributos del libro
    std::string titulo;
    std::string autor;
    int anioPublicacion;
    // Constructor del libro
    Libro(std::string t,
          std::string a,
          int anio);
    /* Metodo de comparación de objetos de clase libro
     * por medio de sobre carga del operdor <
     * comparará el año de publicación
     */
    bool operator<(const Libro& l) const;
};

class Biblioteca{
  private:
    // Atributos de la clase Bibliotea
    /* Se crea un contenedor de tipo vector que contendrá
    objetos de tipo libro*/
    std::vector<Libro> libros;
  public:
    /* Metodo para agregar un libro, recibe el constructor de un libro
     * en llaves {} de la forma {titulo, autor, año de publicación} 
     */
    void agregarLibro(const Libro& libro);
    // Metodo para mostrar libros
    void mostrarLibros();
    // Metodo para ordenar libros por año de publicación
    void ordenarLibrosPorAnio();
    // Iterador para buscar libro
    std::vector<Libro>::iterator buscarLibroPorTitulo(
      const std::string& titulo);
    // Iterador para contener el final del contenedor
    std::vector<Libro>::iterator end();
};

#endif
