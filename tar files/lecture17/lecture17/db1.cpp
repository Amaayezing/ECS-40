//
// db1.cpp
//
// database of 6-letter names and numbers

#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

unsigned int index(string s)
{
  unsigned int i = 0, j = 0;
  do
  {
    i = i * 26 + s[j++] - 'a' + 1;
  }
  while ( j < s.size() );
  return i;
}

int main()
{
  vector<int> table;
  // resize table to accomodate any 6-letter word, letters in [a,z]
  const int m = 26;
  table.resize(m + m*m + m*m*m + m*m*m*m + m*m*m*m*m + m*m*m*m*m*m + 1);
  cout << "table size: " << table.size() << endl;

  string s;
  unsigned int i;
  ifstream infile("names.txt");

  // build the database
  while ( infile >> s >> i )
  {
    table[index(s)] = i;
  }
  cout << "database ready" << endl;

  // query the database
  int notfound = 0;
  while ( cin >> s )
  {
    int i = table[index(s)];
    cout << "s: " << s << " index: " << index(s) << endl;
    if ( i > 0 )
      cout << s << " " << i << endl;
    else
    {
      cout << "not found" << endl;
      notfound++;
    }
  }
  cout << notfound << " elements were not found" << endl;
}
