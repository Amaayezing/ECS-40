//
// leftright.cpp
//
#include <iostream>
using namespace std;
int main()
{
  double x = 1.23456789;

  cout << "default:" << endl;
  cout.width(15);
  cout << x << '#' << endl;

  cout << "using setf(ios_base::right,..)" << endl;
  cout.setf(ios_base::right, ios_base::adjustfield);
  cout.width(15);
  cout << x << '#' << endl;
  
  cout << "using setf(ios_base::left,..)" << endl;
  cout.setf(ios_base::left, ios_base::adjustfield);
  cout.width(15);
  cout << x << '#' << endl;

  // show that the change in adjustment is persistent
  cout << "repeat:" << endl;
  cout.width(15);
  cout << x << '#' << endl;
}
