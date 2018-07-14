//
// stl_derived3.cpp
//
// use range-based for statement (C++11)
// compile using: g++ -std=c++11 stl_derived3.cpp
#include<iostream>
#include<vector>
using namespace std;

class A
{
  public:
    virtual void print(void) { cout << "A::print" << endl; }
};

class B : public A
{
  public:
    virtual void print(void) { cout << "B::print" << endl; }
};

int main()
{
  A a;
  B b;

  vector<A*> v;
  v.push_back(&a);
  v.push_back(&b);

  v.push_back(new A);
  v.push_back(new B);

  // ptr syntax in call to print
  for ( A* p : v )
  {
    p->print();
  }
}

