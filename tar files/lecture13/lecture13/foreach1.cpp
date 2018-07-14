//
// foreach1.cpp
//

#include<list>
#include<algorithm>
#include<iostream>
using namespace std;

void f(int i)
{
  cout << i << " ";
}

int main()
{
  list<int> l;
  l.push_back(1);
  l.push_back(2);
  l.push_back(3);
  l.push_back(5);
  l.push_back(7);
  l.push_back(11);
  l.push_back(13);
  l.push_back(17);

  for_each(l.begin(),l.end(),f);

  cout << endl;
}
