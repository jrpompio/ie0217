#include <iostream>
using namespace std;
 

void printArray(int array[], int size ){
  for (int i = 0; i < size; ++i){
    cout << " " << array[i];
  }
  cout << endl;
}

void insertionSort(int array[], int size){
  for (int step = 1; step < size; step++){
    int key = array[step];
    int j = step - 1;

    while (key < array[j] && j >= 0){
      array[j+1] = array[j];
      --j;
    }
    array[j+1] = key;
  }
}
    
    
int main() {

  int data[] = {-2, 45, 0, 11, -9, -8129, 21313};
  int size = sizeof(data) / sizeof(data[0]);
  insertionSort(data, size);
  cout << "Sorted Array in Ascending Order: " <<endl;
  printArray(data, size);

return 0;
}
