//
// auto.cpp
//
// use auto to determine the type of an iterator

#include<iostream>
#include<string>
#include<list>
using namespace std;

int main()
{
  list<string> l;
  l.push_back(string("This"));
  l.push_back(string("is"));
  l.push_back(string("an"));
  l.push_back(string("example"));

  auto i = l.begin();
  while ( i != l.end() )
    cout << *i++ << " ";

  cout << endl;
}
