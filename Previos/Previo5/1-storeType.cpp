#include <iostream>
using namespace std;
    
  int globalVariable = 42; // Se almacena segmento de data    
    
int main() {
  int stackVariable = 10;               // Se almacena en el stack 
  int* heapVariable = new int(20);      // Se almacena en el heapVariable 
  
  cout << "Valor de globalVariable: " << globalVariable << endl;
  cout << "Valor de stackVariable: " << stackVariable << endl;
  cout << "Valor de heapVariable: " << heapVariable << endl;

  delete heapVariable;               // Liberar memoria asignada en el heap
  
return 0;
}

