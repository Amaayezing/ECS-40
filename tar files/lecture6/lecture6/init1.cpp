//
// init1.cpp
//
// initialization of a private member in a ctor
#include<iostream>
#include<stdexcept>
using namespace std;

class Value
{ 
  public:
    Value(int x) { i = x; }
    void set(int x) { i = x; }
    int get(void) const { return i; }
    friend ostream& operator << (ostream& os, const Value& v)
    { os << v.i; return os; }
  private:
    int i;
};

int main()
{
  Value v(3);
  cout << v << endl;
}
