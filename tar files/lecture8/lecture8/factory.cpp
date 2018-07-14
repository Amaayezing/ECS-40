//
// factory.cpp
//
#include<iostream>
using namespace std;

class Shape
{
  public:
    virtual void print(void) const = 0;
    static Shape *makeShape(int i);
};

class Square : public Shape
{
  public:
    virtual void print(void) const { cout << "Square::print" << endl; }
};

class Circle: public Shape
{
  public:
    virtual void print(void) const { cout << "Circle::print" << endl; }
};

class Triangle: public Shape
{
  public:
    virtual void print(void) const { cout << "Triangle::print" << endl; }
};

Shape *Shape::makeShape(int i)
{
  if ( i == 0 ) return new Square;
  if ( i == 1 ) return new Circle;
  if ( i == 2 ) return new Triangle;
  return 0;
}

int main()
{
  int i;
  cin >> i;
  Shape *p = Shape::makeShape(i);
  if ( p != 0 )
    p->print();
}
