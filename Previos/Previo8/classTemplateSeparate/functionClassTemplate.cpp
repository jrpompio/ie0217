#include "headerClassTemplate.hpp"

template<class T>
Number<T>::Number(T n) : num(n) {}

template<class T>
T Number<T>::getNum(){
  return num;
}
