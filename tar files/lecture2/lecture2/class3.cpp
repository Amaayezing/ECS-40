//
// class3.cpp
//
// Demonstrate the use of a class
// The class Value is defined in a separate file

#include<iostream>
#include "Value.h"

int main()
{
  Value v;

  v.set(3);
  v.print();
}
