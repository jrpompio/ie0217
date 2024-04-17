#include <iostream>
using namespace std;
    
void bubbleSort(    // Recibe de parametros
    int array[],    // El arreglo
    int size        // El tamaño del arreglo
  ){

  // Se hace de forma cuadratica ya que este es el caso de mayor complejidad
  // y esto asegura el orden
  for (int step = 0; step < size; ++step){
    for (int i = 0; i < size - step; i++) {
      if (array[i] > array [i + 1]){
        int temp = array[i];
        array[i] = array[i + 1];
        arrra[i + 1] = temp; 
  }
  }
  }
  }

void printArray(int array[], int size ){
  for (int i = 0; i < size; ++i){
    cout << " " << array[i];
  }
  cout << endl;
}

    
int main() {

  int data[] = {-2, 45, 0, 11, -9};
  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size)
  cout << "Sorted Array in Ascending Order: " <<endl;
  printArray(data, size);

return 0;
}
