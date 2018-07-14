//
// db2.cpp
//
// database of 6-letter names and numbers
// use a simple hash function

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
  const int n = 1000000;
  vector<int> table(n);
  cout << "table size: " << table.size() << endl;
  int ncoll = 0;

  string s;
  int i;
  ifstream infile("names.txt");

  // build the database
  while ( infile >> s >> i )
  {
    unsigned int ind = index(s);
    unsigned int hash = ind % table.size();
    
    if ( table[hash] != 0 )
    {
      cout << "collision! " << s << " at index=" << ind << endl;
      ncoll++;
    }
    table[hash] = i;
  }

  cout << "total of " << ncoll << " collisions" << endl;
  cout << "database ready" << endl;

  // query the database
  int notfound = 0;
  while ( cin >> s )
  {
    unsigned int ind = index(s);
    unsigned int hash = ind % table.size();
    int i = table[hash];
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
