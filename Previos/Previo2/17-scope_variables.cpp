#include <iostream>


using namespace std;

void contador(){
    static int controlVar = 4;
    ++controlVar;
    if (controlVar < 10){
    cout << controlVar << " es menor a 10" <<endl;
    } else {
    cout << controlVar << " es mayor o igual a 10" <<endl;        
    }
}
 

int main(){
   extern int n;

    for (int i = 0; i < 10; i++){
        contador();
    }

    cout << "Variable externa: "  << n <<endl;        
}

