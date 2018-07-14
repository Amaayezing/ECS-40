//
// read2.cpp
//
#include<iostream>
using namespace std;
int main()
{
  int i, j;
  cin >> i;

  cout << "cin.good(): " << boolalpha << cin.good() << endl;
  cout << "cin.eof():  " << boolalpha << cin.eof() << endl;
  cout << "cin.fail(): " << boolalpha << cin.fail() << endl;
  cout << "cin.bad():  " << boolalpha << cin.bad() << endl;

  cin >> j;

  cout << "cin.good(): " << boolalpha << cin.good() << endl;
  cout << "cin.eof():  " << boolalpha << cin.eof() << endl;
  cout << "cin.fail(): " << boolalpha << cin.fail() << endl;
  cout << "cin.bad():  " << boolalpha << cin.bad() << endl;
}
