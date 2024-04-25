#include "headerLab5.hpp"
#include <iostream>
#include <algorithm>

Libro::Libro(
  std::string t,
  std::string a,
  int anio):
  titulo(t),
  autor(a),
  anioPublicacion(anio) {}

bool Libro::operator<(
  const Libro& l
  ) const
  {
  return anioPublicacion < l.anioPublicacion;
  }

void Biblioteca::agregarLibro(
  const Libro& libro)
  {
    libros.push_back(libro);
  }

void Biblioteca::mostrarLibros(){
  for (const auto& libro : libros){
    std::cout << libro.titulo << ", "
    << libro.autor << ", "
    << libro.anioPublicacion << std::endl;
  };
  }

void Biblioteca::ordenarLibrosPorAnio(){
  std::sort(libros.begin(), libros.end());
  }

std::vector<Libro>::iterator Biblioteca::buscarLibroPorTitulo(
  const std::string& titulo){
    return std::find_if(libros.begin(), libros.end(),
    [&titulo](const Libro& l) {
      return l.titulo == titulo;
    });
  }

std::vector<Libro>::iterator Biblioteca::end(){
  return libros.end();
}

