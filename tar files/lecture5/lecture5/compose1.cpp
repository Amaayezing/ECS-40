//
// compose1.cpp
//
// composition of objects
// In the following, B "HAS A" A

class A
{
  public:
  int x;
};

class B
{
  public:
  int y;
  A a;
};

int main()
{
  B b;

  // assign element x of element a of b
  b.a.x = 1;

  // assign element y of b
  b.y = 2;
}
