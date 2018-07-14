//
// rangeloop.cpp
//
// range-based for loop
#include<vector>
#include<iostream>

int main()
{
  int u[] = { 1, 2, 3, 4, 5 };
  std::vector<int> v;
  v.push_back(87);
  v.push_back(76);
  v.push_back(65);

  // traditional loop
  for ( int i = 0; i < v.size(); i++ )
  {
    std::cout << v[i] << std::endl;
  }

  // range-based loop
  for ( auto a : u )
  {
    std::cout << a << std::endl;
  }
  // range-based loop
  for ( auto a : v )
  {
    std::cout << a << std::endl;
  }
  // range-based loop using a reference
  for ( auto& a : v )
  {
    std::cout << a << std::endl;
  }
}
