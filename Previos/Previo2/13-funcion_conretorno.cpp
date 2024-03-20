// Instrucciones break y continue
#include <iostream>

using namespace std;

int add(int a, int b){
    return(a + b);
}

int main(){
    int x = 100;
    int y = -100;
    int suma;
    suma = add(x,y);

    cout << "La suma de 100 + -100 es: " << suma <<endl;
    return 0;
}