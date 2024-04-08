#include <iostream>

using namespace std;
    
    
    
int main() {

    int num;
    cout << "Enter total numbers of students: ";
    cin >> num;
    float* ptr;

    // memory allocation of num number of floats 
    ptr = new float[num];

    cout << "Enter GPA of students." << endl;
    for (int i = 0; i < num; ++i){
      cout << "student" << i + 1 << ": ";
      cin >> *(ptr + i);
    }

  cout << "\nDisplaying GPA of students." << endl;
  for (int i = 0; i < num; ++i){
    cout << "student" << i + 1 << ": " << *(ptr + i) <<endl;
  }

// ptr memory is realeased
  delete[] ptr;

return 0;
}
