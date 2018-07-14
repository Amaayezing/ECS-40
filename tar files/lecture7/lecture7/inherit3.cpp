//
// inherit3.cpp
//
// private base class members are still part of derived classes
class A
{
  public:
    int a_pub;
    void set_priv(int i) { a_priv = i; }
  private:
    int a_priv;
};
class B : public A
{
  public:
    void g(int i)
    {
      set_priv(i);
    }
};
int main()
{
  B b;
  b.set_priv(3);
}
