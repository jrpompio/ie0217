#include <iostream>
using namespace std;
    
    
    
int main() {

    int* pointInt;       // delcarando puntero entero
    float* poinFloat;    // declarando puntero flotante
    
    pointInt = new int;       // Alojamiento dimamico
    poinFloat = new float;

    *pointInt = 45;       // Asignación de valor a la memoria
    *poinFloat = 45.45f;

   cout <<  *pointInt << endl;
   cout <<  *poinFloat << endl;
    
    delete pointInt;
    delete poinFloat;


return 0;
}
