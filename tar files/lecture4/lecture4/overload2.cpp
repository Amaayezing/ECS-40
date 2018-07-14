//
// overload2.cpp
//
// overload the << operator without making it a friend

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

ostream& operator << (ostream& os, const Value& v)
{ os << v.get(); return os; }

int main()
{
  Value v;
  v.set(3);
  cout << v << endl;
}
