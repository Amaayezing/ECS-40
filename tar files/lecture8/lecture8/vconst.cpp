//
// vconst.cpp
//
// attempt to use a virtual constructor
// this does not compile
#include<iostream>
using namespace std;

class A
{
  public:
    virtual A(int i) : val(i) {}
    int val;
    virtual void print(void)
    {
      cout << "Value printed using A::print: " << val << endl;
    }
};

class B : public A
{
  public:
    virtual B(int i) : A(i) {}
    virtual void print(void)
    {
      cout << "Value printed using B::print: " << val << endl;
    }
};

int main()
{
  A a(1);
  B b(2);
}
