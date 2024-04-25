#include "headerLab5.hpp"
#include <iostream>
#include <algorithm>

// Constructor de la clase libro
Libro::Libro(
  std::string t,
  std::string a,
  int anio):
  titulo(t),
  autor(a),
  anioPublicacion(anio) {}

// Metodo de sobrecarga para comparar objetos libro por año de publicación
// Sobre carga del operador <
bool Libro::operator<( 
  const Libro& l          /* <--- Se define a l 
                           * como el identificador del objeto a la derecha del
                           * operador
                           */
  ) const
  {
  // Se retorna el resultado booleano de comparar estos atributos
  return anioPublicacion < l.anioPublicacion;
  }

void Biblioteca::agregarLibro(
  const Libro& libro            /* Se recibirán los datos del constructor de 
                                 * Libro, ya que el metodo recibe esta clase
                                 * con eso se inicializa el objeto libro
                                 */
  )
  {
    libros.push_back(libro);  /* Una vez inicializado libro, se envia por
                               * la función miembro push_back de vector 
                               */
  }

void Biblioteca::mostrarLibros(){
  for (const auto& libro : libros){    /* Se hace un for each 
                                        * para cada objeto tipo Libro
                                        * almacenado en el contenedor libros
                                        * y libro obtiene el objeto contenido
                                        */
    // Se muestran los atributos 
    std::cout << libro.titulo << ", "
    << libro.autor << ", "
    << libro.anioPublicacion << std::endl;
  };
  }

/* El método de ordenar libros por año
 * usa una función sort de la libreria algorithm
 */
void Biblioteca::ordenarLibrosPorAnio(){
  std::sort(libros.begin(), libros.end());
  }

/* Se crea un método de tipo iterador de contenedor vector
 * que recibe un string para poder comparar y así buscar en el contenedor 
 * de objetos libro si existe uno con el titulo igual al string
 */
std::vector<Libro>::iterator Biblioteca::buscarLibroPorTitulo(
  const std::string& titulo)
  {
    return std::find_if        /* Retorto del método por mediante 
                                * la función miembro find_if  
                                */
    (
    libros.begin(), libros.end(), // Obtiene inicio y fin del contenedor vector
    
    // Función lambda para comparar los titulos de los objetos tipo libro
    // esto es el tercer parametro de find_if
    [&titulo](const Libro& l)     
    {
      return l.titulo == titulo;
    }
    );
  }

// Este metodo retorta el objeto final en el contenedor vector llamado Libros
std::vector<Libro>::iterator Biblioteca::end(){
  return libros.end();
}

