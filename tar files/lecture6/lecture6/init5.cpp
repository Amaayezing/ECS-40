//
// init5.cpp
//
// initialization order in a ctor
#include<iostream>
using namespace std;

class Pair
{ 
  public:
    Pair(int a, int b): ma(a), mb(ma+b) {}
    int ma;
    int mb;
};

int main()
{
  Pair p(1,2);
  cout << p.ma << " " << p.mb << endl;
}
