#include <iostream>
#include <vector>
using namespace std;

int main() {

// Creando vector
vector<int> vec{1, 2, 3, 4};

// Creando iteradores que apunten al primer y el ultimo elemento
vector<int>::iterator itr_first = vec.begin();
vector<int>::iterator itr_last = vec.end() - 1;

// Mostrado los elementos del vector 
cout << "Primer elemento: " << *itr_first <<endl;
cout << "Segundo elemento: " << itr_first[1] <<endl;


cout << "Penultimo elemento: " << *(itr_last - 1) <<endl;
cout << "Ultimo elemento: " << *(itr_last) <<endl;

return 0;
}