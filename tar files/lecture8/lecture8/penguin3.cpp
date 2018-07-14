//
// penguin3.cpp
//
#include<iostream>
#include<string>
using namespace std;

class BirdException
{ 
  public:
  BirdException(const string s) : msg(s) {}
  string msg;
};

class Bird
{
  public:
    virtual void fly(void) = 0;
};

class Penguin : public Bird
{
  public:
    virtual void fly(void)
    {
      throw BirdException("oops, penguins can't fly");
    }
};

int main()
{
  Penguin p;

  try
  {
    p.fly();
  }
  catch ( BirdException& be )
  {
    cerr << "Exception caught: " << be.msg << endl;
  }
}
