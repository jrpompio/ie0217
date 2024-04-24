#include <iostream>
#include <stack>
using namespace std;
    
    
    
int main() {
  // Creando un stack de elementos tipo int    
  stack<int> numbers;
  // Añadiendo al stack
  numbers.push(1);
  numbers.push(100);
  numbers.push(10);

  cout << "Numbers are: ";

  /* Se accede a cada elemento del top, y para acceder a otro elemento
   * se debe remover el que está actualmente en el top para acceder al siguiente
   */ 

  while (!numbers.empty()){
    // Mostrando elemento en el top
    cout << numbers.top() << ", ";

    // Removiendo elemento en el top para acceder al siguiente elemento
    numbers.pop(); 
    }
    cout << endl; 

return 0;
}
