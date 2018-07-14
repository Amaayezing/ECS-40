//
// doubledispatch2.cpp
//
// Implementing double dispatch using runtime type identification (RTTI)

#include<iostream>
using namespace std;

// forward declarations
class C; class G; class T; class A;

class Nucleotide
{
  public:
  virtual char name(void) = 0; // C, G, T, A
  virtual bool binds(Nucleotide* p) = 0;
};

class C : public Nucleotide
{
  public:
  virtual char name(void) { return 'C'; }
  virtual bool binds(Nucleotide* p);
};
class G : public Nucleotide
{
  public:
  virtual char name(void) { return 'G'; }
  virtual bool binds(Nucleotide* p);
};
class T : public Nucleotide
{
  public:
  virtual char name(void) { return 'T'; }
  virtual bool binds(Nucleotide* p);
};
class A : public Nucleotide
{
  public:
  virtual char name(void) { return 'A'; }
  virtual bool binds(Nucleotide* p);
};
bool C::binds(Nucleotide* p) { return ( dynamic_cast<G*>(p) != 0 ); }
bool G::binds(Nucleotide* p) { return ( dynamic_cast<C*>(p) != 0 ); }
bool T::binds(Nucleotide* p) { return ( dynamic_cast<A*>(p) != 0 ); }
bool A::binds(Nucleotide* p) { return ( dynamic_cast<T*>(p) != 0 ); }

int main()
{
  Nucleotide *n1 = new A;
  Nucleotide *n2 = new C;
  cout << n1->name() << " binds to " << n2->name() << " ? "
       << boolalpha << n1->binds(n2) << endl;
}
