//
// map1.cpp
//

#include<iostream>
#include<map>
using namespace std;

int main()
{
  map<string,int> grades;

  grades["joe"] = 77;
  grades["lisa"] = 99;
  grades["bob"] = 85;
  grades["anna"] = 78;

  for ( map<string,int>::iterator i = grades.begin(); i != grades.end(); i++ )
    cout << i->first << " " << i->second << endl;
}
