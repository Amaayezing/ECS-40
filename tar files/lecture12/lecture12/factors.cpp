//
// factors.cpp
//

#include<iostream>
#include<set>
#include<cstdlib> // atoi()
using namespace std;

int main(int argc, char **argv)
{
  int n = atoi(argv[1]);
  multiset<int> fac;

  int f = 2;
  while ( f <= n )
  {
    while ( n % f == 0 )
    {
      // f is a divisor of n
      fac.insert(f);
      n /= f;
    }
    f++;
  }
    
  for ( multiset<int>::iterator i = fac.begin(); i != fac.end(); i++ )
    cout << *i << " ";
  cout << endl;
}
