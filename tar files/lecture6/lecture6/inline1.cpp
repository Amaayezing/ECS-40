#include<iostream>
using namespace std;

double a[10000],x[10000];

inline double cube(double x)
{
  return x*x*x;
}

int main()
{
  for ( int i = 0; i < 10000; i++ )
    x[i] = i;

  for ( int i = 0; i < 10000; i++ )
    a[i] = cube(x[i]);
}
