//
// specialized1.cpp
//
// implement a specialized member function in a derived class
#include<iostream>
using namespace std;

class A
{
  public:
    A(int i) : val(i) {}
    int val;
    void print(void)
    {
      cout << "Value printed using A::print: " << val << endl;
    }
};

class B : public A
{
  public:
    B(int i) : A(i) {}
    void print(void)
    {
      cout << "Value printed using B::print: " << val << endl;
    }
};

class C : public A
{
  public:
    C(int i) : A(i) {}
};

int main()
{
  A a(1);
  a.print();
  B b(2);
  b.print();
  C c(3);
  c.print();
}
