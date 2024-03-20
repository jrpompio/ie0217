// FUNCION VOID
#include <iostream>

using namespace std;

void mostrarNum (int a, int b) {
    cout << "Primer numero es:" << a <<endl;
    cout << "Segundo numero es:" << b <<endl;
}

int main(){

    int x = 10;
    double y = 7.3;
    mostrarNum(x,y);
    return 0;
}