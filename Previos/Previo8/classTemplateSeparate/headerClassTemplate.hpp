#ifndef CLASS_TEMPLATE
#define CLASS_TEMPLATE

// Class template
template<class T>
class Number {
  private:
    T num;
  public:
    Number(T n); // Constructor
    T getNum();
};

#include "functionClassTemplate.cpp"

#endif
