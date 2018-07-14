//
// erase1.cpp
//
#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& v)
{
  for ( int i = 0; i < v.size(); i++ )
    cout << v[i] << " ";
  cout << endl;
}

int main()
{
  vector<int> v(10);
  for ( int i = 0; i < v.size(); i++ )
    v[i] = i;
  print(v);

  // erase element 3
  vector<int>::iterator iter;
  iter = v.begin() + 3;
  cout << "erase element 3" << endl;
  v.erase(iter);
  print(v);

  // erase elements 5 to 7 included
  vector<int>::iterator iter1 = v.begin()+5;
  vector<int>::iterator iter2 = v.begin()+8;
  cout << "erase elements 5 to 7 included" << endl;
  v.erase(iter1,iter2);
  print(v);
}
