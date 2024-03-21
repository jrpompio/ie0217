#include <iostream>

using namespace std;

int main(){

int control = 0;

para:

    if (control < 10 ){

    cout << " La variable control corresponde a: " << control <<endl;
    ++control;
    goto para;

} else { goto terminar;

}

terminar: 
    cout << "     fin del pseudo ciclo for" << endl;


return 0;

}
