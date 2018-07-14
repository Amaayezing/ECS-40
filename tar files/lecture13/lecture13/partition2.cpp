//
// partition2.cpp
//
// use stable_partition

#include<list>
#include<algorithm>
#include<iostream>
using namespace std;

bool gt_10(int i)
{
  return i > 10;
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

  list<int>::iterator it = l.begin();
  while ( it != l.end() )
    cout << *it++ << " ";
  cout << endl;

  // move all elements larger than ten to the beginning
  stable_partition(l.begin(),l.end(),gt_10);
  
  it = l.begin();
  while ( it != l.end() )
    cout << *it++ << " ";
  cout << endl;
}
