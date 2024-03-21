#include <iostream>

using namespace std;

struct Distance {

    int feet;
    float inch;

};

int main(){

    Distance *ptr, d;
    ptr = &d;

    cout << "ENTER FEET: ";
    cin >> (*ptr).feet;
    cout << "ENTER INCH: ";
    cin >> (*ptr).inch;

    cout << "Displaying information. " <<endl;
    cout << "Distance = " << (*ptr).feet << " feet and "
    << (*ptr).inch << "inches\n";



return 0;
}
