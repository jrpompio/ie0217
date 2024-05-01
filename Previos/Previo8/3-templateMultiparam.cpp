#include <iostream>
using namespace std;
    
// template con parámetros multiples y parámetros por defecto en una clase   
template<class T, class U, class V = char >
class ClassTemplate {
  private:
    T var1;
    U var2;
    V var3;
  public:
    ClassTemplate(T v1, U v2, V v3) : var1(v1), var2(v2), var3(v3) {}
    void printVar(){
      cout << "var1 = " << var1 << endl;
      cout << "var2 = " << var2 << endl;
      cout << "var3 = " << var3 << endl
      << endl;
    }
};

int main() {
  // Creando objetos con tipos de dato int, double y char
  ClassTemplate<int, double> objeto1(7, 7.7, 'c');
  cout << "Valores de objeto1: " <<endl;
  objeto1.printVar();

  // Creando objetos con tipos de dato int, double y bool
  ClassTemplate<int, double> objeto2(8.8, 'a', false);
  cout << "Valores de objeto2: " <<endl;
  objeto2.printVar();



return 0;
}
