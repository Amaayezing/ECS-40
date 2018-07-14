//
// search1.cpp
//
// Use the search algorithm
// Define a sequence of numbers using a list l1
// Search for a subsequence l2 in l1

#include<list>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
  list<int> l1;
  l1.push_back(55); l1.push_back(3);
  l1.push_back(72); l1.push_back(14);
  l1.push_back(9);  l1.push_back(22);
  l1.push_back(47);

  list<int> l2;
  l2.push_back(3); l2.push_back(72); l2.push_back(14);

  list<int>::iterator it;
  cout << "l1: ";
  for ( it = l1.begin(); it != l1.end(); it++ )
    cout << *it << " ";
  cout << endl;
  cout << "l2: ";
  for ( it = l2.begin(); it != l2.end(); it++ )
    cout << *it << " ";
  cout << endl;

  list<int>::iterator first2 = l2.begin();
  list<int>::iterator last2 = l2.end();

  it = search(l1.begin(),l1.end(),first2,last2);

  if ( it != l1.end() )
    cout << "sequence l2 found" << endl;
  else
    cout << "sequence l2 not found" << endl;
}
