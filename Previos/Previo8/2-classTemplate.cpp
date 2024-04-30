#include <iostream>
using namespace std;
  
// Class template
template<class T>
class Number {
  private:
    T num;
  public:
    Number(T n) : num(n) {} // Constructor
    T getNum(){
      return num;
    }
};

int main() {

  // Creando un objeto con tipo int
  Number<int> numeroInt(7);
  // Creando un objeto con tipo double
  Number<double> numeroDouble(7.7);

  cout << "Numero tipo int = " << numeroInt.getNum() <<endl;
  cout << "Numero tipo double = " << numeroDouble.getNum() <<endl;

return 0;
}
