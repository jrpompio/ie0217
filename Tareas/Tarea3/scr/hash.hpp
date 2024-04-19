/********************************************//**
 * @file hash.hpp
 * @version 1.0
 * @date 18/04/2014
 * @author Junior Ruiz Sánchez
 * @title estructura de datos tipo contacto y clase Hash-Table
 * @code AGREGAR CODIGO DE EJEMPLO DE USO
     int main() {
HashTable contactsApp(1000); 
string nombre;
int numero;

int opcion;
  
  do
  {
    cout << "\n\nSelecciona su opcion: " << endl;
    cout << "1. Agregar contacto " << endl;
    cout << "2. Mostrar contactos " << endl;
    cout << "3. Mostrar tabla " << endl;
    cout << "4. Eliminar contacto " << endl;
    cout << "5. Salir " << endl;
    cin >> opcion;
    cin.ignore();

    switch (opcion)
    {
      case AGREGAR_CONTACTO:
      cout << "Ingrese el nombre del contacto:";
      getline(cin, nombre);
      cout << "Ingrese el numero del contacto:";
      cin >> numero; 

      contactsApp.agregarElemento(nombre, numero);
      break;

      case MOSTRAR_CONTACTOS:
      contactsApp.mostrarContactos();
      break;

      case MOSTRAR_ALL:
      contactsApp.mostrarHashTable();
      break;

      case ELIMINAR_CONTACTO:

      getline(cin, nombre);
      contactsApp.eliminarElemento(nombre, "cloud");
      break;

      case SALIR:
      cout << "Saliendo del programa..." << endl;
      break;
    
    default:
      cout << "Opcion no permitida" << endl;
      break;
    }

  } while (opcion != SALIR);





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
        contacto actualContacto;  /**< Contacto almacenado en el nodo. */
        Nodo* anteriorNodo;       /**< Puntero al nodo anterior para enlazar */
};

/************************************************************************//**
 * @brief Clase para crear objeto tipo tabla hash para almacenar estructuras
 * de datos que contengan elementos string, int y la propia estructura.
 ***************************************************************************/

class HashTable{
  private:
 int maxElements;           /**< Número máximo de elementos que puede contener la tabla hash. */
    int indiceAnterior;     /**< Índice del nodo anterior para enlazar con nodo actual. */
    Nodo** tablaNodos;      /**< Array de punteros a nodos para almacenar los elementos de la tabla. */
    int* tablaIndices;      /**< Array para guardar los índices de los elementos en la tabla hash. */
    int index;              /**< Índice actual en la tabla hash. */
    contacto** tablaHash;  /**< Tabla hash que contiene los elementos. */
    bool ordenada;         /**< Array de punteros a contactos para almacenar los elementos de la tabla. */

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
    void eliminarElemento(const std::string &nombre, std::string tipo);  

  /**************************************************************//**
   * @brief Muestra los elementos a la tabla hash.
   * @details Este método muestra los elementos de la tabla hash.
   *****************************************************************/
    void mostrarHashTable(); 

  /**************************************************************//**
   * @brief Muestra los contactos almacenados en la tabla hash.
   * @details Muestra en orden alfabetico los contactos almacenados.
   *****************************************************************/
    void mostrarContactos(); 

};



#endif
