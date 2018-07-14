//
// insert2.cpp
//
// insert elements in a list
#include<iostream>
#include<list>
using namespace std;

void print(list<int>& l)
{
  list<int>::iterator i;
  for ( i = l.begin(); i != l.end(); i++ )
    cout << *i << " ";
  cout << endl;
}

int main()
{
  list<int> l;

  // insert 3 at position 0
  list<int>::iterator iter;
  iter = l.begin();
  cout << "insert 3 at beginning" << endl;
  l.insert(iter,3);
  print(l);

  // insert 8 at end
  iter = l.end();
  cout << "insert 8 at end" << endl;
  l.insert(iter,8);
  print(l);

  // insert 9 at end
  cout << "insert 9 using push_back" << endl;
  l.push_back(9);
  print(l);

  // insert 2 at beginning
  cout << "insert 2 using push_front" << endl;
  l.push_front(2);
  print(l);
}
