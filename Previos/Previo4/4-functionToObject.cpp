#include <iostream>
using namespace std;

class Student {                 
  public:
    double marks1, marks2;
};

Student createStudent(){     // Creando función de tipo Student
  Student student;           // Creando objeto de tipo Student para el return

  student.marks1 = 96.5;   
  student.marks2 = 75.0;
  
  cout << "Marks 1 = " << student.marks1 << endl;
  cout << "Marks 2 = " << student.marks2 << endl;
  
  return student;
}

int main() {
  Student estudianteIE0217;

  estudianteIE0217 = createStudent();
  // Mostrando datos obtenidos de nuevo pero mediante la obtención de sus
  // atributos 
  cout << "Marks 1 = " << estudianteIE0217.marks1 << endl;
  cout << "Marks 2 = " << estudianteIE0217.marks2 << endl;

return 0;
}
