//
// dangling.cpp
//
// function returning a reference to a local variable

int f(void)
{
  int i;
  int &ref = i;
  return ref; // huh?
}
