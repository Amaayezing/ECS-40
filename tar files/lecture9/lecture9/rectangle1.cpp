//
// rectangle1.cpp
//
#include<iostream>
using namespace std;

class Rectangle
{
  public:
    Rectangle(float h, float w) : height(h), width(w) {}
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
  cout << s.width << " " << s.height << endl;
}

