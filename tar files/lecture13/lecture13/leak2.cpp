class A
{
  public:
  ~A(void) {}
  private:
  int a;
};

class B : public A
{
  public:
  B(void) { p = new int[10]; }
  ~B(void) { delete [] p; }
  private:
  int* p;
};
  
int main()
{
  A* p = new B;
  delete p;
}
