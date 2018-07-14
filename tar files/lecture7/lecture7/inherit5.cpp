//
// inherit5.cpp
//
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
};

int main()
{
  B b;
  b.a_pub = 1; // ok
  b.a_prot = 1; // error
  b.a_priv = 1; // error
}
