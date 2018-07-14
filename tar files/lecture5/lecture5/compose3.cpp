//
// compose3.cpp
//
// composition of objects
// In the following, A "HAS A" pointer to an A 
// This can be useful to define linked lists

class A
{
  public:
  int x;
  A *next;
};

int main()
{
  // define an empty list of A objects
  A *list = 0;

  // Add an element to the list
  A* p = new A;
  p->next = list;
  list = p;

  // Add another element to the list
  p = new A;
  p->next = list;
  list = p;
}
