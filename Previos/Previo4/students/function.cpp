#include <iostream>
#include "function.hpp"
using namespace std;

void calculateAverage(Student s1, Student s2) {
  double average = (s1.marks + s2.marks)/2;

  cout << "Average Marks = " << average << endl;

}
