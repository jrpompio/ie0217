#include <iostream>

using namespace std;

int main(){
    int var = 5;

    int* pointVar;

    pointVar = &var;
  
    cout << "var = " << var << endl;
    cout << "dirección de var (&var) " << &var
    << endl << endl;


    cout << "pointVar = " << pointVar << endl;
    cout << "Contenido de: " << *pointVar
    << endl << endl;

    cout << "var = " << *&var << endl;   // Por lo que usar *&var
                                         // te entrega var
    

return 0;
}
