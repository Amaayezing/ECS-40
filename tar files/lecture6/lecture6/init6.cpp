//
// init6.cpp
//
// initialization order in a ctor
// The order of declarations of ma and mb is reversed
#include<iostream>
using namespace std;

class Pair
{ 
  public:
    Pair(int a, int b): ma(a), mb(ma+b) {}
    int mb;
    int ma;
};

int main()
{
  Pair p(1,2);
  cout << p.ma << " " << p.mb << endl;
}
