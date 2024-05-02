#include <iostream>     // Biblioteca de salida estandar
#include <vector>       // Biblioteca para contenedor tipo vector
#include <cmath>        // Biblioteca matemática, se usará raiz
#include <stdexcept>    // Biblioteca para manejo de excepciones

// Uso de template
template <class T>        // Debe ir <class argumento>
class Statistics {
  public:
    Statistics(const std::vector<T>& data) : data(data) {
      // En caso de que el vector obtenido esté vacio se manejará el error
      if(data.empty()){
        /* Acá se usa la instrucción throw la cual mediante un if arroja el
         * error de argumento invalido, el cual se usa mediante una función
         * de la biblioteca de stdexcept.
         */
        
        throw std::invalid_argument("La lista"
        " de datos debe contener elementos");
      }
    }

    double mean() const {
      T sum = 0;
      for (const T& value : data){
        sum += value;
      }

      /* Acá se conviernte sum a double si es entero 
       * para no perder precisión
       */
      return  static_cast<double>(sum) / data.size();
    }

    double standardDeviation() const {
      double meanValue = mean();
      double sumSquares = 0;

      for (const T& value : data){
        sumSquares += (value - meanValue) * (value - meanValue); 
      }
      return std::sqrt(sumSquares / data.size());
    }
    private:
      std::vector<T> data;
};

int main(){

try {

  // Creando vector que contiene elementos int 
  std::vector<int> intData = {1, 2, 3, 4, 5, 6};

  /* Usando template de la clase para enviar contenedor de elementos tipo int
   */ 
  Statistics<int> statsInt(intData);

  std::cout << "Media de intData: " << statsInt.mean() << std::endl;
  std::cout << "Desviación estandar de intData: "
    << statsInt.standardDeviation() << std::endl;
  
  // Creando vector que contiene elementos double
  std::vector<double> doubleData = {1.5, 2.5, 3.5, 4.5, 5.5};
  
  /* Usando template de la clase para enviar contenedor de elementos tipo
   * double
   */
  Statistics<double> statsDouble(doubleData);

  std::cout << "Media de doubleData: " << statsDouble.mean() << std::endl;
  std::cout << "Desviación estandar de doubleData: "
    << statsDouble.standardDeviation() << std::endl;

  // Forzando el error para mostrar la captura del mismo.
  std::vector<int> intDataError = {};
  Statistics<int> statsIntError(intDataError);


} catch (const 
std::invalid_argument& e  // Acá se obtiene el contenido del throw
) {
  std::cerr << std::endl << "Excepcion encontrada: " 
    << e.what()     // Acá se presenta el contenido del throw 
    << std::endl;

  return 1; // Devolviendo 1 en main, debido al error

}

return 0;   
}