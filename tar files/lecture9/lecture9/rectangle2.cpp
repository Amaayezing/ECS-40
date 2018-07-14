//
// rectangle2.cpp
//
#include<iostream>
using namespace std;

class Rectangle
{
  public:
    Rectangle(float h, float w) : height(h), width(w) {}
    void flatten(void) { height-=10; width+=10; }
    float height, width;
};

class Square : public Rectangle
{
  public:
    Square(float side) : Rectangle(side, side) {}
};

int main()
{
  Square s(30.0f);
  s.flatten();
  cout << s.width << " " << s.height << endl;
}

