//
// Value.h
//
// Definition of the Value class

#ifndef VALUE_H
#define VALUE_H

#include<iostream>
class Value
{ 
  public:
    void print(void) { std::cout << i << std::endl; }
    void set(int x) { i = x; }
  private:
    int i;
};
#endif
