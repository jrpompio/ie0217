#include <iostream>
using namespace std;
    
class Distance {
  private:
      int meter;

      //función amiga
      friend int addFive(Distance);
  public:
    Distance() : meter(0) {}
};

int addFive(Distance d){
    // acceso a miembro privado desde función amiga
    d.meter += 5;

    return d.meter; // La función retorna el miembro protegido
}

int main() {
    Distance D;
    cout << "Distance: " << addFive(D) << addFive(D) << endl;

return 0;
}
