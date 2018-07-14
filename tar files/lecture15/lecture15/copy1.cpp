//
// copy.cpp
//
#include<iostream>
using namespace std;
int main()
{
  string line;
  while ( !cin.eof() )
  {
    getline(cin,line);
    cout << line << endl;
  }
}
