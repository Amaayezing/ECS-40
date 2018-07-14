//
// inherit2.cpp
//
// derived class attempting to access base class private data
// compilation error
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
    a_priv = 1;
  }
};
int main()
{
  B b;
}
