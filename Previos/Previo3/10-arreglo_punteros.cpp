#include <iostream>

using namespace std;

int main(){

    int *ptr;
    int arr[5];
    ptr = arr;

    cout<< ptr + 1 << " (ptr + 1) es equivalente a &arr[1] "<< &arr[1] <<endl; 
    cout<< ptr + 2 << " (ptr + 2) es equivalente a &arr[2] "<< &arr[2] <<endl; 
    cout<< ptr + 3 << " (ptr + 3) es equivalente a &arr[3] "<< &arr[3] <<endl; 
    cout<< ptr + 4 << " (ptr + 4) es equivalente a &arr[4] "<< &arr[4] <<endl; 

return 0;
}
