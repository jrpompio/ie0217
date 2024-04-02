#include <iostream>
#include "students.hpp"
#include "function.hpp"

using namespace std;
    
    
    
int main() {
  Student student1(88.0), student2(56.0); // Instanciación de los objetos 

  calculateAverage(student1, student2);   // Uso de la función que recibe
                                          // Objetos de tipo Student

return 0;
}
