//
// class9.cpp
//
// Demonstrate the use of a class
// Use of const objects
// the Value::set member function is declared const, but this is
// violated by the i = x statement. Compilation error.

#include<iostream>
using namespace std;

class Value
{ 
  public:
    void print(void) const { std::cout << i << std::endl; }
    // we promise that set is const
    // but we break this promise
    void set(int x) const { i = x; }
    int get(void) const { return i; }
  private:
    int i;
};

void f(const Value& v)
{
  int j = v.get();
  cout << "in function f: " << j << endl;
}

int main()
{
  Value v;

  v.set(3);
  cout << "v.get() = " << v.get() << endl;
  v.print();
  f(v);
}
