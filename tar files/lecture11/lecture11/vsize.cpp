//
// vsize.cpp
//

#include<iostream>
#include<vector>
using namespace std;

int main()
{
  vector<int> v;

  cout << endl << "vector<int> v;" << endl;
  cout << "size:     " << v.size() << endl;
  cout << "max_size: " << v.max_size() << endl;
  cout << "capacity: " << v.capacity() << endl;
  cout << endl;

  v.resize(10);

  cout << endl << "v.resize(10)" << endl;
  cout << "size:     " << v.size() << endl;
  cout << "max_size: " << v.max_size() << endl;
  cout << "capacity: " << v.capacity() << endl;
  cout << endl;

  v.push_back(1);

  cout << endl << "v.push_back(1)" << endl;
  cout << "size:     " << v.size() << endl;
  cout << "max_size: " << v.max_size() << endl;
  cout << "capacity: " << v.capacity() << endl;
  cout << endl;

  v.reserve(50);

  cout << endl << "v.reserve(50)" << endl;
  cout << "size:     " << v.size() << endl;
  cout << "max_size: " << v.max_size() << endl;
  cout << "capacity: " << v.capacity() << endl;
  cout << endl;
}
