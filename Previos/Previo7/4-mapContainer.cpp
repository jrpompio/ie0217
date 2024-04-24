#include <iostream>
#include <map>
using namespace std;  
    
int main() {
    // <tipo de dato de la llave, tipo de dato del valor>
  map<int, string> student;
  // Usando el operador [] para añadir elementos
  student[1] = "Jacqueline";
  student[2] = "Blake";
  // usando metodo inset() para añadir elementos
  student.insert(make_pair(3, "Denise"));
  student.insert(make_pair(4, "Blake"));
  // Añadiendo elementos con claves duplicadas
  student[5] = "Timothy";
  student[5] = "Aaron";

  for (long unsigned int i = 1; i <= student.size(); ++i){
    cout << "Student[" << i << "]: " << student[i] << endl;
  }
    

return 0;
}
