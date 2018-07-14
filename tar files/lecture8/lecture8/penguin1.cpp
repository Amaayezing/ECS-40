//
// penguin1.cpp
//

class Bird
{
  public:
    virtual void fly(void) = 0;
};

class Penguin : public Bird
{
  public:
};

int main()
{
  Penguin p;

  p.fly();
}
