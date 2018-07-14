//
// write.cpp
//
#include<iostream>
using namespace std;
int main()
{
  // write 4 unformatted integers on output
  int buf[] = { 12, 34, 56, 78 };
  char *p = reinterpret_cast<char*>(&buf[0]);
  cout.write(p,4*sizeof(int));
}
