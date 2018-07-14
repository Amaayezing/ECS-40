//
// find1.cpp
//
// using the find algorithm

#include<list>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
  list<int> l;
  l.push_back(55);
  l.push_back(3);
  l.push_back(72);
  l.push_back(14);
  l.push_back(9);
  l.push_back(22);
  l.push_back(47);

  // print all elements in the list
  list<int>::iterator it;
  for ( it = l.begin(); it != l.end(); it++ )
    cout << *it << " ";
  cout << endl;

  // look for element 14 using the find algorithm
  if ( (it = find(l.begin(),l.end(),14)) != l.end() )
    cout << 14 << " was found" << endl;
  else
    cout << 14 << " was not found" << endl;

  // look for element 99
  if ( (it = find(l.begin(),l.end(),99)) != l.end() )
    cout << 99 << " was found" << endl;
  else
    cout << 99 << " was not found" << endl;
}
