//
// sstream2.cpp
//
// using string streams

#include<iostream>
#include<sstream>
#include<iomanip>
using namespace std;

int main()
{
  double x,y;
  string s("123.456");

  istringstream is(s);

  is >> x;

  cout << "x= " << x << endl;
}
