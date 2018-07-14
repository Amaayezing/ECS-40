//
// names.cpp
//

#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main()
{
  const int n = 10000;
  for ( int i = 0; i < n; i++ )
  {
    string s;
    s += (char) ( 'a' + rand()%26 );
    s += (char) ( 'a' + rand()%26 );
    s += (char) ( 'a' + rand()%26 );
    s += (char) ( 'a' + rand()%26 );
    s += (char) ( 'a' + rand()%26 );
    s += (char) ( 'a' + rand()%26 );
    cout << s <<  " " << rand() << endl;
  }
}
