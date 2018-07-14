//
// strcmp.cpp
//
#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s1, s2;
  cin >> s1 >> s2;

  if ( s1.compare(s2) < 0 )
    // s1 precedes s2
    cout << s1 << " " << s2 << endl;
  else
    // s2 precedes s1 or s1 and s2 are equal
    cout << s2 << " " << s1 << endl;
}
