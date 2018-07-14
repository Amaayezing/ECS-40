//
// newdel.cpp
//
// demonstrate the use of new and delete

#include<iostream>
using namespace std;

int main()
{
  int *p;

  p = new int;
  *p = 3;

  delete p;

  p = new int[10];
  for ( int i = 0; i < 10; i++ )
  {
    p[i] = i;
  }

  delete [] p;

  // deleting p a second time!
  delete [] p;

  // deleting a null pointer is allowed
  p = 0;
  delete p;
}
