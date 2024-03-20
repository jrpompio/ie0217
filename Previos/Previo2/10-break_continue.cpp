// Instrucciones break y continue
#include <iostream>

using namespace std;

int main(){
    int k = 3;
    int es_impar;

    while (k >= 0)
    {
        if(k != 0){
        cout << "k es mayor a cero" <<endl;
        k += -1;
        } else {
            cout << "k es cero" <<endl;
            break;
        }

    }

    cout <<endl;   

    for (int i = 1; i <= 10; ++i){
        es_impar = i%2;

        if (i == 4){ // if para no hacer llegar a switch cuand i = 5
            cout << "el 4 me cae mal" <<endl;
            continue;
        } 

        switch (es_impar)
        {
        case 1: // en caso de ser impar es verdadero
            cout << "es impar" <<endl; 
            break;
        
        default:
            cout << "es par" <<endl;
            break;
        }
    }

    return 0;
}