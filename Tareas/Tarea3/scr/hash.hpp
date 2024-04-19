/********************************************//**
 * @file hash.hpp
 * @version 1.0
 * @date 18/04/2014
 * @author Junior Ruiz Sánchez
 * @title estructura de datos tipo contacto y clase Hash-Table
 * @code AGREGAR CODIGO DE EJEMPLO DE USO
      int main(){
      return 0;
      }
* @endcode
 ***********************************************/

#ifndef HASHTABLE_H
#define HASHTABLE_H 

#include <string>

/********************************************//**
 * @brief Estructura que representa un contacto.
 ***********************************************/
struct contacto {
    std::string nombre;         /**< Nombre del contacto. */
    int numero;                 /**< Número del contacto. */
};

class Nodo {
    public:
        contacto actualContacto;
        Nodo* anteriorNodo;
};

/************************************************************************//**
 * @brief Clase para crear objeto tipo tabla hash para almacenar estructuras
 * de datos que contengan elementos string, int y la propia estructura.
 ***************************************************************************/

class HashTable{
  private:
    int maxElements;
    int indiceAnterior;
    Nodo** tablaNodos;
    int* tablaIndices;
    int index = 0;
    contacto** tablaHash;

  /**************************************************************//**
   * @brief Encripta numericamente un string.
   * @param texto El texto tipo string de la estructura a agregar.
   * @details Convierte el texto recibido en un numero para indexar.
   * @return devuelve el número para indexar un elemento
   *****************************************************************/
    unsigned int hashFunction(const std::string &texto);

  public:

    /**************************************************************//**
   * @brief Constructor de la claseHashTable
   * @param maxElements se ingresa la cantidad de elementos a guardar.
   * @details Convierte el texto recibido en un numero para indexar.
   *****************************************************************/
    HashTable(int maxElements_);
    ~HashTable();
  
  /**************************************************************//**
   * @brief Agrega elemento a la tabla hash.
   * @param texto El texto tipo string de la estructura a agregar.
   * @param numero El numero tipo string de la estructura a agregar.
   * @details Este método agrega un nuevo elemento a la tabla hash.
   *****************************************************************/
    void agregarElemento(
        const std::string &texto,   // Se trabaja con la cadena ya creada &
                                    // pero no se modificará
        const int &numero);

  /**************************************************************//**
   * @brief Elimina elemento a la tabla hash.
   * @param texto El texto tipo string del elemento a eliminar.
   * @details Este método elimina un nuevo elemento a la tabla hash.
   *****************************************************************/
    void eliminarElemento(const std::string &nombre);  

  /**************************************************************//**
   * @brief Muestra los elementos a la tabla hash.
   * @details Este método muestra los elementos de la tabla hash.
   *****************************************************************/
    void mostrarElementos();  

};



#endif
