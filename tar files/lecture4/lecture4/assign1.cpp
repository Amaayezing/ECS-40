//
// assign1.cpp
//
// Demonstrate the use of a class
// Use the default assignment operator

#include "Value3.h"
int main()
{
  Value v1, v2;

  v1.set(4);
  v2 = v1;
  v2.print();
}
