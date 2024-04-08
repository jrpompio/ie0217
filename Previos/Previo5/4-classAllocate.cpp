#include <iostream>
using namespace std;
    
class Student {
  private:
    int age;

  public:
    // constructor inicializa age en 12
    Student(): age(12) {}
    void getAge(){
      cout << "Age= " << age << endl;
    }

};    
    
int main() {
    // Declaración dinamica de objeto tipo Student
    Student* ptr = new Student();
  
    // Llamado de función getAge()
    ptr->getAge();

    // ptr memory is released
    delete ptr;

return 0;
}
