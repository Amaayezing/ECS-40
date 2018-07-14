//
// penguin2.cpp
//
// modified class hierarchy

class Bird
{ };

class FlyingBird : public Bird
{
  public:
    virtual void fly(void) = 0;
};

class NonFlyingBird : public Bird
{ };

class Penguin : public NonFlyingBird
{ };

int main()
{
  Penguin p;
}
