//
// inherit1.cpp
//
class A
{
  public:
    int a_pub;
  private:
    int a_priv;
};
class B : public A
{
  void f(void)
  {
    a_pub = 1;
  }
};
int main()
{
  B b;
}
