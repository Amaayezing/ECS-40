//
// badvector.cpp
//
// copying a list onto another, uses operator= of A

#include<vector>
#include<list>
using namespace std;

// class A has no default constructor
// because a constructor with parameter is defined
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

  list<A> blist;
  blist = alist;
}
