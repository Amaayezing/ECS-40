//
// db4.cpp
//
// use an STL unordered_map
// requires g++ >= 4.8 and -std=c++11

#include<iostream>
#include<string>
#include<unordered_map>
#include<fstream>
using namespace std;

int main()
{
  unordered_map<string,int> table;

  string s;
  int i;
  ifstream infile("names.txt");

  // build the database
  while ( infile >> s >> i )
  {
    table[s] = i;
  }

  cout << "database ready" << endl;

  // query the database
  int notfound = 0;
  while ( cin >> s )
  {
    if ( table.count(s) == 0 ) 
    {
      cout << "not found" << endl;
      notfound++;
    }
    else
    {
      int i = table[s];
      cout << s << " " << i << endl;
    }
  }
  cout << notfound << " elements were not found" << endl;
}
