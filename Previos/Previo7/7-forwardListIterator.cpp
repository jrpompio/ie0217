#include <iostream>
#include <forward_list>
using namespace std;



int main() {
  forward_list<int> nums{1, 2, 3, 4};

  /* Inicializando un iterador hacia un puntero
   * en el inicio de una foward_list
   */
  forward_list<int>::iterator itr = nums.begin();

  while (itr != nums.end())
  {
    // Accediendo al valor del iterador usando
    // operador indirecto
    int original_value =  *itr;

    // Asignando nuevo valor usando operador indirecto
    *itr = original_value * 2;

    // Enviando el iterador a la siguiente posición
    itr++;
  }
  for (int num: nums ){
    cout << num << ", ";
  }

return 0;
}