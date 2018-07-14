//
// strfind.cpp
//
// extract a substring from a string
#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s("tootheaterrible");
  string substr;

  substr = s.substr(4,6);
  
  cout << substr << endl;
}
