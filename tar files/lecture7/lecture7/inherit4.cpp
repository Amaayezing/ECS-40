//
// inherit4.cpp
//
// derived class of a derived class and protected members
class A
{
  public:
    int a_pub;
  protected:
    int a_prot;
  private:
    int a_priv;
};
class B : public A
{
  public:
  void f(void)
  {
    a_prot = 1;
  }
};
class C : public B
{
  public:
  void g(void)
  {
    a_prot = 1;
  }
};
int main()
{
  B b;
  C c;
}
