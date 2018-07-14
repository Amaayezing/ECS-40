//
// draw.cpp
//
// draw ndraw numbers between 1 and 42 included
// use: ./a.out ndraw

#include<iostream>
#include<cstdlib> // atoi() rand()
using namespace std;

int main(int argc, char **argv)
{
  int ndraw = atoi(argv[1]);
  for ( int i = 0; i < ndraw; i++ )
  {
    int n = rand() % 42 + 1;
    cout << n << endl;
  }
}
