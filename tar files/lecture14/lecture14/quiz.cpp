//
// quiz.cpp
//
// What does this program print?
#include<iostream>
using namespace std;
int main()
{
  const char* p1 = "abcdef";
  const char p2[] = { 'a', 'b', 'c', 'd', 'e', 'f' };

  cout << "sizoef(p1): " << sizeof(p1) << endl;
  cout << "sizoef(p2): " << sizeof(p2) << endl;

  cout << p1 << endl;
  cout << p2 << endl;
}
