// manejo de operadores artmeticos
#include <iostream>

using namespace std;

int main(){

// Operadores de asignación
    int x, y, r;
    x = 5; 
    y = 6;

    x += y; // x = x + y
    x -= y; // x = x - y
    x *= x; // x = x * x
    y /= y; // y = y / y
    y %= x; // y = y % x

// Operadores aritmeticos
    cout << "VALOR DE X: " <<  x <<endl; 
    cout << "VALOR DE Y: " << y <<endl; 
    cout << "SUMA: " <<  x + y <<endl; 
    cout << "RESTA: " <<   x - y <<endl; 
    cout << "MULTIPLICACION: " <<  x * y <<endl; 
    cout << "DIVISION: " <<   x / y <<endl; 
    cout << "MODULO: " <<   x % y <<endl; 

    
// OPERADORES RELACIONALES
    cout << "---relacionales: 1:verdadero 0:falso " <<endl; 

    r = x == y;
    cout << "igualdad: " <<   r <<endl; 
    r = x != y;
    cout << "no igualdad: " <<   r <<endl; 
    r = x > y;
    cout << "mayor que: " <<   r <<endl; 
    r = x < y;
    cout << "menor que: " <<   r <<endl; 
    r = x >= y;
    cout << "mayor o igual que: " <<   r <<endl; 
    r = x <= y;
    cout << "menor o igual que: " <<   r <<endl; 


// OPERADORES LOGICOS
    cout << "---lógicos: uso de operadores logicos \n"
    << "a resultados de operadores relacionales " <<endl; 

    r = x > y && x < y;
    cout << "mayor que && menor: " <<   r <<endl;
    r = x > y || x < y;
    cout << "mayor que || menor que: " <<   r <<endl;
    r = !(x > y);
    cout << "no mayor que: " <<   r <<endl;
    
// OPERADORES BIT A BIT
    cout << "--- bit a bit: " <<endl;

    r = x & y;
    cout << "operacion & (and): " << r <<endl;
    r = x | y;
    cout << "operacion | (or): " << r <<endl;
    r = x ^ y;
    cout << "operacion ^ (xor): " << r <<endl;
    r = ~ x;
    cout << "operacion ~ (1complemento): " << r <<endl;
    r =  x << 1 ;
    cout << "operacion shift left: " <<   r <<endl;
    r =  x >> 1;
    cout << "operacion shift right: " <<  r <<endl;

    return 0;
}