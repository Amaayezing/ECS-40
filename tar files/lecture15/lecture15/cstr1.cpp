//
// cstr1.cpp
//
#include <iostream>
#include <cstring> // strcpy
#include <string>
using namespace std;

int main()
{
  string str ("abcdefghijkl");

  char * cstr = new char [str.length()+1];
  strcpy (cstr, str.c_str()); // note: strcpy(dest,src)

  // cstr now contains a c-string copy of str

  cout << " original: " << str << endl;
  cout << " c-string: " << cstr << endl;

  // modify the original string
  str.replace(0,5,"mnopq");
  cout << "after replace:" << endl;

  cout << " original: " << str << endl;
  cout << " c-string: " << cstr << endl;
}
