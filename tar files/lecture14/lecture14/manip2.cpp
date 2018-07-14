//
// manip2.cpp
//
// Show that the left manipulator is persistent
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
  double a = 1.23456789;
  double b = 2014.0;
  double c = 1.0e-18;

  cout << "using setprecision(5) setw(12) fixed and left:" << endl;
  cout << setprecision(5) << setw(12) << fixed << left << a << '#' << endl;
  cout << setprecision(5) << setw(12) << fixed << left << b << '#' << endl;
  cout << setprecision(5) << setw(12) << fixed << left << c << '#' << endl;

  cout << endl;
  cout << "repeat without manipulators:" << endl;
  cout << a << '#' << endl;
  cout << b << '#' << endl;
  cout << c << '#' << endl;

  cout << endl;
  cout << "repeat using setw(12):" << endl;
  cout << setw(12) << a << '#' << endl;
  cout << setw(12) << b << '#' << endl;
  cout << setw(12) << c << '#' << endl;
}
