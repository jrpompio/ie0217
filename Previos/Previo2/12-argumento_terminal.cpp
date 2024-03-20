// FUNCION VOID
#include <iostream>

using namespace std;


int main(int argc, char* argv[]){

    cout << "Número de argumentos: " << argc <<endl;
    
    for (int i = 0; i < argc; ++i) {
        cout << "ARGUMENTO " << i << ": " << argv[i] << endl;
    }

    return 0;
}
