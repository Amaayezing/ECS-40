//
// lottery.cpp
//

#include<iostream>
#include<set>
#include<cstdlib> // rand()
using namespace std;

int main()
{
  set<int> numbers;
  // draw 6 random numbers between 1 and 42
  // insert numbers in the set
  int count = 0;
  while ( numbers.size() < 6 )
  {
    int n = rand() % 42 + 1;
    count++;
    numbers.insert(n);
  }
  for ( set<int>::iterator i = numbers.begin(); i != numbers.end(); i++ )
    cout << *i << " ";
  cout << endl;
  cout << "count: " << count << endl;
}
