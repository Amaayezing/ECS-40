//
// file2.cpp
//
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ifstream myfile("not_there.conf");
  int i;
  myfile >> i;
  cout << " read " << i << " from file not_there.conf" << endl;
}
