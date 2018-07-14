//
// badvector.cpp
//

#include<vector>
#include<list>
using namespace std;

// class A has no default constructor
// because a constructor with parameter is defined
// This is ok since objects are created before being inserted in the vector
// using push_back()
class A
{
  public:
    A(int x) : val(x) {}
  private:
    int val;
};

int main()
{
  list<A> alist;
  alist.push_back(A(123));
}
