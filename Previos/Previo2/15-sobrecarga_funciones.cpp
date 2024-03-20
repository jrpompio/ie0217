// Uso de sobrecarga de funciones
#include <iostream>

using namespace std;

void display(char *a){
    cout << "La palabra ingresada es: " << a <<endl;
}
void display(int a){
    cout << "El número ingresado es: " << a <<endl;
}
int op(int a, int b){
   return (a * b);
}
float op(float a, float b){
    return (a + b) + 0.5;
}

void op(int a, char *b){
    cout << "se detectó un numero: " << a <<endl;
    cout << "se detectó un string: " << b <<endl;

}

int main (){
    int n = 5;
    int m = 10;
    float k = 1.999;
    float l = 3.33333;
    char name[] = "Pancracio";


    display(n);
    display(name);
    cout << "Operación con enteros: " << op(n,m) <<endl;
    cout << "Operación con flotantes: " << op(k,l) <<endl;
    op(m, name);


    return 0;
}