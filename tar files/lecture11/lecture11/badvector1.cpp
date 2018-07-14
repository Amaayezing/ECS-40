//
// badvector.cpp
//

#include<vector>
#include<list>
using namespace std;

// class A has no default constructor
// (more exactly, it is private, so not accessible)
class A
{
  public:
  private:
    int val;
    A(void);
};

int main()
{
  list<A> alist;
  vector<A> avec(10);
}
