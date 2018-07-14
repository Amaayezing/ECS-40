//
// class7.cpp
//
// Demonstrate the use of a class
// Use of const objects

#include<iostream>
using namespace std;

class Value
{ 
  public:
    void print(void) { std::cout << i << std::endl; }
    void set(int x) { i = x; }
    int get(void) { return i; }
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

  // compilation error: get() member function does not 
  // guarantee constness
  f(v);
}
