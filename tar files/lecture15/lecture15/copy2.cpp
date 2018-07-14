//
// copy2.cpp
//
#include<iostream>
using namespace std;
int main()
{
  string line;
  getline(cin,line);
  while ( cin )
  {
    cout << line << endl;
    getline(cin,line);
  }
}
