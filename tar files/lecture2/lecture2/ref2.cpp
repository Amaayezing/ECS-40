//
// ref2.cpp: example of passing an argument by reference
//
// Compilation error due to uninitialized reference

#include<iostream>
using namespace std;

// function f: parameter passed by reference
void f(int& i)
{
  i++;
}
// function g: parameter passed by value
void g(int i)
{
  i++;
}
int main()
{
  int a = 1, b = 1;
  int &refa;
  int &refb = b;
  cout << "Before call: a = " << a << " b = " << b << endl;
  f(a);
  g(b);
  cout << "After  call: a = " << a << " b = " << b << endl;
}
