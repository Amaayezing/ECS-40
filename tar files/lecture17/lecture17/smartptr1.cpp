//
// smartptr1.cpp
//
// This program uses a raw (dumb) pointer and has a memory leak
#include<vector>

class Value
{
  public:
  int val;
};

int main()
{
  std::vector<Value*> v;
  v.push_back(new Value);
}
