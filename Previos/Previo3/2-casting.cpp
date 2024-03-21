#include <iostream>

using namespace std;

int main(){
    // Casteo implicito

    int num_int = 9;        // asignación del valor int
    double num_double;      // declaración de variable double

    num_double = num_int;   // Conversión implicita

    cout << "num_int = " << num_int << "\n"
    << "num_double = " << num_double << endl;
    
    // Casteo 
    
    double double_num = 3.56;   // asignación del valor double
    cout << "double_num = " << double_num << endl;

    int num_int1 = (int)double_num;  // Casteo C-style
    cout << "num_int1 = " << num_int1 << endl;
    
    int num_int2 = int(double_num);
    cout << "num_int2 = " << num_int2 << endl;

return 0;
}
