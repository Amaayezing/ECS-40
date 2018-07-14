//
// multiset1.cpp
//

#include<iostream>
#include<set>
using namespace std;

int main()
{
  multiset<int> s;

  s.insert(22);
  s.insert(34);
  s.insert(12);
  s.insert(22);
  s.insert(34);
  s.insert(12);

  for ( multiset<int>::iterator i = s.begin(); i != s.end(); i++ )
    cout << *i << " ";
  cout << endl;
}
