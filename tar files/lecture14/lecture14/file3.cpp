//
// file3.cpp
//
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ifstream myfile("not_there.conf");
  if (!myfile)
  {
    cout << "error opening file" << endl;
    return 1;
  }

  int i;
  myfile >> i;

  cout << " read " << i << " from file not_there.conf" << endl;
}
