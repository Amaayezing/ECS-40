//
// stl_derived1.cpp
//
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

  vector<A> v;
  v.push_back(a);
  v.push_back(b);

  v[0].print();
  v[1].print();
}