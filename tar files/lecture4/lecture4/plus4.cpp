//
// plus4.cpp
//
// overloading operator+ as a non-member function
// use a ctor in the definition of operator+
// use public accessor in the definition of operator+
#include<iostream>
using namespace std;

class Value
{ 
  public:
    Value(void) {}
    Value(int x) { i = x; }
    void print(void) const { std::cout << i << std::endl; }
    void set(int x) { i = x; }
    int get(void) const { return i; }
    friend ostream& operator << (ostream& os, const Value& v)
    { os << v.i; return os; }
  private:
    int i;
};
const Value operator+(const Value& x, const Value& y)
{ return Value(x.get()+y.get()); }

int main()
{
  Value v1, v2;
  v1.set(2);
  v2.set(3);
  cout << v1+v2 << endl;
  cout << v1 << " " << v2 << endl;
}
