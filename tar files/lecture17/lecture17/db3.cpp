//
// db3.cpp
//
// database of 6-letter names and numbers
// use a simple hash function
// store values in a vector<map<string,int>>

#include<iostream>
#include<string>
#include<map>
#include<algorithm>
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
  const int n = 50000;
  vector<map<string,int> > table(n);
  cout << "table size: " << table.size() << endl;

  string s;
  int i;
  ifstream infile("names.txt");

  // build the database
  while ( infile >> s >> i )
  {
    int ind = index(s);
    int hash = ind % table.size();
    table[hash][s] = i;
  }

  int ncoll = 0;
  int mult = 0;
  for ( unsigned int i = 0; i < table.size(); i++ )
  {
    if ( table[i].size() > 1 )
    {
      ncoll++;
      mult = max(mult,(int)table[i].size());
    }
  }
  cout << "total of " << ncoll << " collisions" << endl;
  cout << "maximum multiplicity: " << mult << endl;
  cout << "database ready" << endl;

  // query the database
  int notfound = 0;
  while ( cin >> s )
  {
    unsigned int ind = index(s);
    //cout << "index: " << ind << endl;
    unsigned int hash = ind % table.size();
    //cout << "hash:  " << hash << endl;
    if ( table[hash].count(s) == 0 ) 
    {
      cout << "not found" << endl;
      notfound++;
    }
    else
    {
      int i = table[hash][s];
      cout << s << " " << i << endl;
    }
  }
  cout << notfound << " elements were not found" << endl;
}
