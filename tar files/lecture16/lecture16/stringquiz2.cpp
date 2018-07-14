//
// stringquiz.cpp
//

// Do not compare C-style strings using <

#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout << "Is \"xyz\" < \"abc\" ? ";
  if ( "xyz" < "abc" )
    cout << "yes";
  else
    cout << "no";
  cout << endl;

  cout << "Is \"pqr\" < \"xyz\" ? ";
  if ( "pqr" < "xyz" )
    cout << "yes";
  else
    cout << "no";
  cout << endl;

  cout << "\"xyz\" at " << static_cast<const void*>("xyz") << endl;
  cout << "\"abc\" at " << static_cast<const void*>("abc") << endl;
  cout << "\"pqr\" at " << static_cast<const void*>("pqr") << endl;
  cout << "\"xyz\" at " << static_cast<const void*>("xyz") << endl;
}
