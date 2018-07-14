//
// read2.cpp
//
// use the cin stream

#include<iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  bool state = (bool) cin;
  cout << "cin state = " << boolalpha << state << endl;
  cout << "a=" << a << " b=" << b << endl;
}
