#include <iostream>

using namespace std;

void valores(
    int a,
    char *b,
    float c = 1.11,
    const char *d = "pancracio");

int main()
{
    char cadena[] = "hola";

    valores(10, cadena);

    cout <<endl;

    valores(10, cadena, 10, cadena);

return 0;
}



void valores(
    int a,
    char *b,
    float c,
    const char *d) {

        cout << "mostrando valores añadidos: " 
        << a << " y " << b <<endl;
        cout << "mostrando valores que puede ser por defecto: " 
        << c << " y " << d <<endl;

    }