#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector <string> languages = {"Python", "C++", "Java"};

  // Creando un iterador hacia un vector de tipo string
  vector<string>::iterator itr;

  // iterando todos los elementos
  for (itr = languages.begin(); itr != languages.end();
  itr++){
    cout << *itr;
    
    /* Agregando lógica para impresión correcta
     * de la coma y salto de linea en ultima iteración 
     */
    
    if (itr != languages.end()-1){
      cout << ", ";
      } else {
      cout << endl;
      } 
  }
  

return 0;
}