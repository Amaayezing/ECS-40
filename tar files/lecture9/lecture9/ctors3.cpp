//
// ctors.cpp
//
// Demonstrate the use of a class
// Use of various constructors

#include<iostream>
using namespace std;

class Value
{ 
  public:
    Value(void) { i = 1; cout << " Default ctor" << endl; }
    Value(int v) { i = v; cout << " ctor with parameters" << endl; }
    Value(const Value& v) { i = v.i; cout << " Copy ctor" << endl; }
    void print(void) const { std::cout << i << std::endl; }
    void set(int x) { i = x; }
  private:
    int i;
};

int main()
{
  Value v; // user-defined constructor: initializes to 1
  v.print();
  Value w(v); // use the default copy constructor
  w.print();
  Value x(4); // use the constructor with initialization
  x.print();
  Value z = x;
  z.print();
}
