// // manip1.cpp
//
// Show that the setw() manipulator is not persistent
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
  double a = 1.23456789;
  double b = 5432.0;
  double c = 1.0e-18;

  cout << "using setprecision(5) setw(12) and fixed:" << endl;
  cout << setprecision(5) << setw(12) << fixed << a << endl;
  cout << setprecision(5) << setw(12) << fixed << b << endl;
  cout << setprecision(5) << setw(12) << fixed << c << endl;

  cout << endl;
  cout << "repeat without manipulators:" << endl;
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;

  cout << endl;
  cout << "repeat using setw(12):" << endl;
  cout << setw(12) << a << endl;
  cout << setw(12) << b << endl;
  cout << setw(12) << c << endl;
}
