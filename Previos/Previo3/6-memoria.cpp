#include <iostream>

using namespace std;

int main(){

    int var1 = 3;
    int var2 = 24;
    int var3 = 17;
    int var4 = 3;
    
    
    // Se usa &<variable> para obtener la dirección en memoria
    // de dicha variable

    cout << "Dirección de var1: " << &var1 << endl;
    cout << "Dirección de var2: " << &var2 << endl;
    cout << "Dirección de var3: " << &var3 << endl;
    cout << "Dirección de var4: " << &var4 << endl;

return 0;
}
