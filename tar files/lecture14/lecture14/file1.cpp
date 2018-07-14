//
// file1.cpp
//
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ifstream myfile("game.conf");
  int i;
  myfile >> i;

  cout << "read " << i << " from file game.conf" << endl;
}
