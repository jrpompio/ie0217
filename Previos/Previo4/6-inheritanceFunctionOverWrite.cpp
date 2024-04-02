#include <iostream>
using namespace std;

class Animal {
    public: 
    void eat (){
        cout << " I can eat!" << endl;
    }

    void sleep(){
        cout << " I can sleep!" << endl;
    }      


};

class Dog : public Animal {
  public:
    void bark() {
        cout << "\n I can bark!" << endl; 
        cout << "      __" << endl;
        cout << "   o-°°|\\_____/)"  << endl;
        cout << "    \\_/|_)     )" << endl;
        cout << "woof!  \\  __  /" << endl;
        cout << "woof!   (_/ (_/" << endl;
    }
        void eat (){
        cout << "\n I can eat!" << endl;
        cout << "      __" << endl;
        cout << "   o-°°|\\_____/)"  << endl;
        cout << "    \\_/|_)     )" << endl;
        cout << "   _   \\  __  /" << endl;
        cout << " |___|  (_/ (_/" << endl;
    }

    void sleep(){
        cout << "\n I can sleep!" << endl;
        cout << "      __" << endl;
        cout << "   o-''|\\_____/)"  << endl;
        cout << "zzz \\_/|_)     )" << endl;
        cout << "       \\  __  /" << endl;
        cout << "        (_/ (_/" << endl;
    }

};


int main() {

Dog dog1;

cout << " As an animal:" << endl;

dog1.Animal::eat(); 
dog1.Animal::sleep();

cout << "\n As a dog:" << endl;

dog1.eat();
dog1.sleep();
dog1.bark();    

return 0;
}