//
// Value3.cpp
//
// Definition of the Value class

#include "Value3.h"
#include<iostream>
using namespace std;

Value::Value(void)
{
  i = 1;
}

void Value::print(void)
{
  cout << i << endl;
}

void Value::set(int x)
{
  i = x;
}
