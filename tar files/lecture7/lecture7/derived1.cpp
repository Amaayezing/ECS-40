//
// derived1.cpp
//
// constructors and destructors in derived classes
#include<iostream>
using namespace std;

class A
{
  public:
    A(void) { cout << "A::A() called" << endl; }
    ~A(void) { cout << "A::~A() called" << endl; }
};

class B : public A
{
  public:
    B(void) { cout << "B::B() called" << endl; }
    ~B(void) { cout << "B::~B() called" << endl; }
};

int main()
{
  B b;
}
