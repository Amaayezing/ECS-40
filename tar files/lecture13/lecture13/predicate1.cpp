//
// predicate1.cpp
//

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

  // find first element greater than 10
  it = find_if(l.begin(), l.end(), gt_10);
  cout << " the first element larger than 10 is " << *it << endl;

  it++;
  it = find_if(it, l.end(), gt_10);
  cout << " the second element larger than 10 is " << *it << endl;

}
