//
// remove1.cpp
//

#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
  int array[] = { 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4 };
  // initialize vector with array
  vector<int> v(array,array+12);

  cout << " initial value: " << endl;
  cout << " v: ";
  for ( unsigned int i = 0; i < v.size(); i++ )
    cout << v[i] << " ";
  cout << endl;

  vector<int>::iterator iter;

  iter = remove(v.begin(), v.end(), 3);

  cout << " after remove: " << endl;
  cout << " v: ";
  for ( unsigned int i = 0; i < v.size(); i++ )
    cout << v[i] << " ";
  cout << endl;

  // print elements of v up to iter
  cout << " up to iter: " << endl;
  cout << " v: ";
  for ( vector<int>::iterator i = v.begin(); i != iter; i++ )
    cout << *i << " ";
  cout << endl;
}
