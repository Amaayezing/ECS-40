//
// ctors.cpp
//
// Demonstrate the use of a class
// Use of various constructors
// Default ctor needed for declaration of variable v is not 
// defined automatically by the compiler since there is another ctor defined.
// compilation error

#include<iostream>
using namespace std;

class Value
{ 
  public:
//    Value(void) { i = 1; }
    Value(int v) { i = v; }
    void print(void) const { std::cout << i << std::endl; }
    void set(int x) { i = x; }
  private:
    int i;
};

int main()
{
  Value v;
//  v.print();
//  Value w(v); // use the default copy constructor
//  w.print();
//  Value x(4); // use the constructor with initialization
//  x.print();
}
