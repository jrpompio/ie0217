#include <iostream>

using namespace std;

#define MI_PRIMER_DEFINE 511    // Sustitución por precompilación

enum seasons {                  // Tipo de dato enum 

    spring = 34,
    summer = 4,
    autumn = 9,
    winter = 32

};


enum emumcito {

    carro = 5,  // Por defecto empieza en cero, pero se le asigna 5
    casa,       // por lo que casa = 6
    arbol,      // arbol = 7
    patio       // patio = 8

};


int main(){
    
    seasons vivaldi;
    vivaldi = summer;
    cout << "Summer = " << vivaldi << endl;
    cout << "Mi primer define: " << MI_PRIMER_DEFINE << endl;
    cout << "Arbol: " << arbol << endl;

return 0;
}
