//
// read3.cpp
//
// use the cin stream

#include<iostream>
using namespace std;

int main()
{
  int a, b;
  bool state;
  cin >> a;
  state = (bool) cin;
  cout << "cin state = " << boolalpha << state << endl;
  cout << "a=" << a << endl;
  cin >> b;
  state = (bool) cin;
  cout << "cin state = " << boolalpha << state << endl;
  cout << "b=" << b << endl;
}
