//
// gcd.cpp
//

#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<cstdlib> // atoi()
using namespace std;

// function 
void factor(int n, multiset<int>& fac)
{
  fac.clear();
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
}

int main(int argc, char **argv)
{
  int n1 = atoi(argv[1]);
  int n2 = atoi(argv[2]);

  multiset<int> fac1, fac2;

  factor(n1,fac1);
  factor(n2,fac2);

  vector<int> v;
  set_intersection(fac1.begin(),fac1.end(),
                   fac2.begin(),fac2.end(),back_inserter(v));
    
  for ( multiset<int>::iterator i = fac1.begin(); i != fac1.end(); i++ )
    cout << *i << " ";
  cout << endl;
  for ( multiset<int>::iterator i = fac2.begin(); i != fac2.end(); i++ )
    cout << *i << " ";
  cout << endl;
  for ( vector<int>::iterator i = v.begin(); i != v.end(); i++ )
    cout << *i << " ";
  cout << endl;
}
