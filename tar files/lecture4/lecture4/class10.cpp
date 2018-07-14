//
// class10.cpp
//
// Demonstrate the use of a class
// Use of const objects
// add the print() member function as const

#include<iostream>
using namespace std;

class Value
{ 
  public:
    void print(void) const { std::cout << i << std::endl; }
    void set(int x) { i = x; }
    int get(void) const { return i; }
  private:
    int i;
};

void f(const Value& v)
{
  int j = v.get();
  cout << "in function f: " << j << endl;
  v.print();
}

int main()
{
  Value v;

  v.set(3);
  cout << "v.get() = " << v.get() << endl;
  f(v);
}
