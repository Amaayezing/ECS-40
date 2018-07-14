//
// overload1.cpp
//
// implement operator<< as a friend function

#include<iostream>
using namespace std;

class Value
{ 
  public:
    void print(void) const { std::cout << i << std::endl; }
    void set(int x) { i = x; }
    int get(void) const { return i; }
    friend ostream& operator << (ostream& os, const Value& v)
    { os << v.i; return os; }
  private:
    int i;
};

int main()
{
  Value v;
  v.set(3);
  cout << v << endl;
}
