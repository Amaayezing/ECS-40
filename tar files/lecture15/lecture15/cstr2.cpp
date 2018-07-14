//
// cstr2.cpp
//
#include <iostream>
#include <cstring> // strcpy, strtok
#include <string>
using namespace std;

int main()
{
  string str ("Please split this sentence into tokens");

  char * cstr = new char [str.length()+1];
  strcpy (cstr, str.c_str()); // note: strcpy(dest,src)

  // cstr now contains a c-string copy of str

  char * p = strtok (cstr," ");
  while (p!=0)
  {
    cout << p << '\n';
    p = strtok(0," ");
  }
  delete[] cstr;
}
