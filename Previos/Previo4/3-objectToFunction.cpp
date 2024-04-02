#include <iostream>
using namespace std;

class Student {
    public:
        double marks;
    Student(double m){
        marks = m;
    }
};

void calculateAverage(Student s1, Student s2){ // Se debe recibir la clase

    double average = (
        s1.marks           // Acá la función accede al atributo marks 
      + s2.marks)/2;       // de cada objeto de clase Student que recibió
        

    cout << "Average Marks = "
     << average << endl;
}

int main() {
    Student student1(88.0), student2(56.0);

    // Uso de la función que recibe esta clase creada como parametro
    calculateAverage(student1, student2); 
    
return 0;
}