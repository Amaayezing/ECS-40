//
// class2.cpp
//
// Demonstrate the use of a class
// Error trying to access private member i of class Value

#include<iostream>

class Value
{ 
  public:
    void print(void) { std::cout << i << std::endl; }
    void set(int x) { i = x; }
  private:
    int i;
};

int main()
{
  Value v;

  v.set(3);
  v.print();

  std::cout << v.i << std::endl;
}
  
