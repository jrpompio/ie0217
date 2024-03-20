// EJEMPLO PARA SWITCH CASE

#include <iostream>

using namespace std;

int main(){

    int var = 3;

    switch (var) {
    case 1:
        cout << "La variable es 1" <<endl;
        break;
    case 2:
        cout << "La variable es 2" <<endl;
        break;
    case 3:
        cout << "La variable es 3" <<endl;
        break;
    
    default:
        cout << "La variable no es 1, 2 o 3" <<endl;
        break;
    }

    return 0;
}