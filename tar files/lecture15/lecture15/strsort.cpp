//
// strsort.cpp
//
#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
using namespace std;
int main()
{
  string s[6] = { "Paul", "Valery", "Victor", "Hugo", "Alessandro", "Manzoni" };
  sort(s,s+6);
  // use stream iterator with formatting string
  ostream_iterator<string> os_iter(cout,"\n");
  copy(s,s+6,os_iter);
}
