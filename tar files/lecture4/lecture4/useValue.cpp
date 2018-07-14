//
// useValue.cpp
//
// use the Value class

#include "Value.h"
#include<iostream>
using namespace std;

int main()
{
  Value v1;
  Value v2(2);
  Value v3(v2);

  cout << "v1 = " << v1 << endl;
  cout << "v2 = " << v2 << endl;
  cout << "v3 = " << v3 << endl;
  Value v4 = v1 + v2;
  cout << "v4 = " << v4 << endl;

  Value v5(0);
}
