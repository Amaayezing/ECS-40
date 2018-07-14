//
// predicate3.cpp
//
// use a function object
// store threshold value in the function object

#include<list>
#include<algorithm>
#include<iostream>
using namespace std;

// function object for predicate "greater than 10"
class Greater_than
{
  public:
  Greater_than(int t): threshold(t) {}
  bool operator() (int i) { return i > threshold; }
  private:
  const int threshold;
};

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

  // find first element greater than 7 
  it = find_if(l.begin(), l.end(), Greater_than(7) );
  cout << " the first element larger than 7 is " << *it << endl;

  it++;
  it = find_if(it, l.end(), Greater_than(7) );
  cout << " the second element larger than 7 is " << *it << endl;

}
