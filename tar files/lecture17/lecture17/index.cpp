//
// index.cpp
//

#include<iostream>
#include<string>
using namespace std;

unsigned int index(string s)
{
  unsigned int i = 0, j = 0; 
  do
  {
    i = i * 26 + s[j++] - 'a' + 1;
  }
  while ( j < s.size() );
  return i;
}

int main()
{
  string s;
  cin >> s;

  cout << index(s) << endl;
}
