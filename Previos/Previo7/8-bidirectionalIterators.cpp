#include <iostream>
#include <list>
using namespace std;

int main() {

  list<int> nums {1, 2, 3, 4, 5};

  // Inicializando el iterador que apunta al incio de nums
  list<int>::iterator itr = nums.begin();

  cout << "Moviendose hacia delante" <<endl;
  // Mostrando los elementos en orden directo
  while (itr != nums.end())
  { 
    cout << *itr << ", ";
    // Moviendo el iterador una posición hacia delante
    itr++;
  }

  cout << endl << "Moviendo el iterador en reversa" << endl;
  // Mostrando los elementos en orden reverso
  while (itr != nums.begin())
  {
    if (itr != nums.end()){
      cout << *itr << ", ";
    }
    itr --;
  }
  cout << *itr << endl;
  
  
return 0;
}