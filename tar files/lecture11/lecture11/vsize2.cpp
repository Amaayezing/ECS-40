//
// vsize.cpp
//

#include<iostream>
#include<vector>
using namespace std;

int main()
{
  vector<char> v;

  cout << endl << "vector<int> v;" << endl;
  cout << "size:     " << v.size() << endl;
  cout << "max_size: " << v.max_size() << endl;
  cout << "capacity: " << v.capacity() << endl;
  cout << endl;

  // 100 GB
  v.resize(100000000000);

  cout << endl << "v.resize(10)" << endl;
  cout << "size:     " << v.size() << endl;
  cout << "max_size: " << v.max_size() << endl;
  cout << "capacity: " << v.capacity() << endl;
  cout << endl;
}
