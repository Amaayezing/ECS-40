//
// except2.cpp
//
// Demonstrate the use of exceptions
// use try-catch blocks

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

  try
  {
    v.set(-3);
  }
  catch ( invalid_argument &e )
  {
    cerr << "Exception: " << e.what() << endl;
  }
  cerr << "Program terminated normally" << endl;
}
