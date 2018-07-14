//
// opequal.cpp
//
// Demonstrate the use of a class
// Define operator=()

#include<iostream>
using namespace std;

class Value
{ 
  public:
    void print(void) const { std::cout << i << std::endl; }
    void set(int x) { i = x; }
    int get(void) const { return i; }
    Value& operator=(const Value& rhs)
    {
      if ( &rhs == this ) return *this;
      i = rhs.i;
      return *this;
    }
  private:
    int i;
};

int main()
{
  Value v1,v2,v3;

  v1.set(3);
  v2 = v1;
  v3.operator=(v2);
  cout << "v1.get() = " << v1.get() << endl;
  cout << "v2.get() = " << v2.get() << endl;
  cout << "v3.get() = " << v3.get() << endl;
}
