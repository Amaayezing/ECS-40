//
// oddeven.cpp
//
// read numbers from input and print them, with even numbers printed first

#include<iostream>
#include<list>
using namespace std;
int main()
{
  list<int> l;
  int i;
  // read the first number
  cin >> i;
  while ( cin )
  {
    // if the number is even, insert it at the beginning
    if ( i%2 == 0 )
      l.push_front(i);
    else
      l.push_back(i);
    // read the next number
    cin >> i;
  }

  list<int>::iterator iter;
  for ( iter = l.begin(); iter != l.end(); iter++ )
    cout << *iter << " ";
  cout << endl;
}
