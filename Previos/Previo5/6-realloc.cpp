#include <iostream>
#include <cstdlib>

using namespace std;
    
int main() {
  // Declarando bloques de memoria
  float *ptr, *new_ptr;
  ptr = (float*) malloc(5 * sizeof(float));

  // Comprobación de la declaración
  if (ptr == NULL) {
    cout << "Memory Allocation Failed"
      << endl;
    exit(1);
  }

  // Inicializando bloque de memoria
  for (int i = 0; i < 5; i++){
    ptr[i] = i * 1.5;
  }

  // Redestinación de la memoria
  new_ptr = (float*) realloc(ptr, 10*sizeof(float));
  if(new_ptr == NULL) {
      cout << "Memory Re-allocation Failed";
      exit(1);
  } 
  // Inicializando bloque de memoria redestinado
  for(int i = 5; i < 10; i++){
    new_ptr[i] = i * 2.5;
  }

  cout << "Printing Values" << endl;
  
  // Mostrando valores de bloque de memoria dedestinado
  for (int i = 0; i < 10; i++){
    cout << new_ptr[i] << endl;
  }
  free(new_ptr);

return 0;
}
