//
// iterator.cpp
//

#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
  vector<int> v;
  for ( int i = 0; i < 10; i++ )
    v.push_back(i);

  ostream_iterator<int> iter(cout);
  copy(v.begin(), v.end(), iter);
}
