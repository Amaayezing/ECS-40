//
// erase3.cpp
//
// get to fourth element by using iter++ three times
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

  // erase fourth element
  list<int>::iterator iter;
  iter = l.begin();
  iter++; iter++; iter++;
  l.erase(iter);
  print(l);
}
