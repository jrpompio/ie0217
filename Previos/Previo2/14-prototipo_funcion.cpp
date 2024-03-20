// Uso de prototipo de función
#include <iostream>

using namespace std;

int add(int a, int b); // Prototipo

int main(){
    int sum;

    sum = add(100,200); // Uso de prototipo

    cout << "100 + 200 = " << sum <<endl;

    return 0;
}


// función completa 
int add(int a, int b){
    return (a + b);
}
