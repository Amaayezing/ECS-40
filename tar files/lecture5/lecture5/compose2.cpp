//
// compose2.cpp
//
// composition of objects
// In the following, A "HAS A" A (recursive definition)
// recursive definition: not allowed, compilation error

class A
{
  public:
  int x;
  A a;
};

int main()
{
  A a;
}
