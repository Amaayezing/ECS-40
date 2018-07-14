//
// stl_derived2.cpp
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

  vector<A*> v;
  v.push_back(&a);
  v.push_back(&b);

  v.push_back(new A);
  v.push_back(new B);

  // ptr syntax in call to print
  for ( int i = 0; i < v.size(); i++ )
  {
    A* p = v[i];
    p->print();
  }
}
