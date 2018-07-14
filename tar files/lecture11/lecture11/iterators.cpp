//
// iterators.cpp
//
// demonstrate the use of forward and reverse iterators

#include<iostream>
#include<list>
using namespace std;

int main()
{
  list<char> l;
  l.push_back('a');
  l.push_back('b');
  l.push_back('c');
  l.push_back('d');
  l.push_back('e');

  // traverse the list forward
  list<char>::iterator fwd = l.begin();
  while (fwd != l.end())
    cout << *fwd++;
  cout << endl;

  // traverse the list backward
  list<char>::reverse_iterator bwd = l.rbegin();
  while (bwd != l.rend())
    cout << *bwd++;
  cout << endl;
}
