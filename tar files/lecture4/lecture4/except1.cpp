//
// except1.cpp
//
// Demonstrate the use of exceptions

#include<iostream>
#include<stdexcept>
using namespace std;

class Value
{ 
  public:
    void print(void) { std::cout << i << std::endl; }
    void set(int x)
    { 
      if ( x < 1 )
        throw invalid_argument("value must be positive");
      i = x;
    }
    int get(void) { return i; }
  private:
    int i;
};

int main()
{
  Value v;
  v.set(-3);
}
