//
// implicit.cpp
//
// implicit conversion among basic types

int f(int i)
{
  return 2*i;
}

int main()
{
  int i1 = 2;
  f(i1);

  double d1 = 3.0;
  f(d1);
}
