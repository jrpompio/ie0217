// LOOPS: FOR, WHILE, DO-WHILE

#include <iostream>

using namespace std;

int main(){

    // Uso de for con valor incremental
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }

    cout << "\n";

    // Uso de for con lista
    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int n: num_array){
        cout << n << " ";
    }

    cout << "\n";

    // while
    int i = 1;
    while (i <= 5)
    {
        cout << i << " ";
        ++i;

    }

    cout << "\n";

    // dowhile
    i = 1;

    do {
        cout << i << " ";
        ++i;
    } 
    while (i <= 5);

    cout << "\n";
    
    return 0;
}