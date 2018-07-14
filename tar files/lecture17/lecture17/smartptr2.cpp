//
// smartptr2.cpp
//
// This program uses an std::unique_ptr
#include<memory>
#include<vector>

class Value
{
  public:
  int val;
};

int main()
{
  std::vector<std::unique_ptr<Value> > v;
  v.push_back(std::unique_ptr<Value>(new Value));
}
