//
// strfind.cpp
//
// check if a substring is contained in a string
#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s("tootheaterrible");
  cout << s << endl << endl;
  string substr;

  // read a substring from stdin
  cin >> substr;

  string::size_type found = s.find(substr);

  if ( found != string::npos )
    cout << substr << " is in " << s << endl;
}
