//
// read1.cpp
//
// use the cin stream

#include<iostream>
using namespace std;

int main()
{
  int i;
  while ( true )
  {
    cin >> i;

    if ( cin )
      cout << " ok, value read is " << i << endl;
    else
    {
      cout << " cin evaluates to false" << endl;
      break;
    }
  }
}
