#include <iostream>
using namespace std;

#define MAX_STUDENTS 20

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
  Student estudiantes[MAX_STUDENTS];
  estudiantes[0] = createStudent();

  // estudianteIE0217 = createStudent();
  // // Mostrando datos obtenidos de nuevo pero mediante la obtención de sus
  // // atributos 
   cout << "Marks 1 = " << estudiantes[0].marks1 << endl;
   cout << "Marks 2 = " << estudiantes[0].marks2 << endl;

return 0;
}
