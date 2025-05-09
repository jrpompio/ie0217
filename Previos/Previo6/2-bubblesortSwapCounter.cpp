#include <iostream>
using namespace std;
    
void bubbleSort(int array[], int size){
  for (int step = 0; step < (size - 1); ++step){
  /* para este caso hay un contador de veces que un valor se intercambia 
    con otro del arreglo, por lo que existe una condición de parada
    la cual es cuando no haya ningún intercambio */
    int swapped = 0; 
    for (int i = 0; i < (size - step -1); ++i){
      if (array[i] > array[i+1]){
        int temp = array [i];
        array[i] = array [i + 1];
        array[i + 1] = temp;

        swapped = 1;
      }
    }
    if (swapped== 0) break;
  }
}    

void printArray(int array[], int size ){
  for (int i = 0; i < size; ++i){
    cout << " " << array[i];
  }
  cout << endl;
}
    
int main() {

  int data[] = {-2, 45, 0, 11, -9, -9999, 9999};
  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size);
  cout << "Sorted Array in Ascending Order: " <<endl;
  printArray(data, size);

return 0;
}
