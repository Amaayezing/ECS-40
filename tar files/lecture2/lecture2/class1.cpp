//
// class1.cpp
//
// Demonstrate the use of a class

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
}
