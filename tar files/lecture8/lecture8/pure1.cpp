//
// pure1.cpp
//
// Using a pure virtual function
#include<iostream>
using namespace std;

class Shape
{
  public:
    virtual void draw(void) = 0;
};

class Square : public Shape
{
  public:
    virtual void draw(void) { cout << "Square::draw" << endl; }
};

class Circle: public Shape
{
  public:
    virtual void draw(void) { cout << "Circle::draw" << endl; }
};

int main()
{
  Shape *shapes[2]; // array of pointers to shapes
  shapes[0] = new Square;
  shapes[1] = new Circle;

  for ( int i = 0; i < 2; i++ )
    shapes[i]->draw();
}
