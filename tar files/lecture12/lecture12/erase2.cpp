//
// erase2.cpp
//
// list cannot use random access
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
  for ( int i = 0; i < 10; i++ )
    l.push_back(i);
  print(l);

  // try to erase element 3 using random access
  list<int>::iterator iter;
  iter = l.begin() + 3;
  l.erase(iter);
  print(l);
}
