//
// read.cpp
//
#include<iostream>
using namespace std;
int main()
{
  // read 4 unformatted integers from input
  int buf[4];
  char *p = reinterpret_cast<char*>(&buf[0]);
  cin.read(p,4*sizeof(int));

  for ( int i = 0; i < 4; i++ )
    cout << buf[i] << " ";
  cout << endl;
}
