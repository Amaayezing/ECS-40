//
// pointset.cpp
//
// storing Points in a set

#include<algorithm>
#include<set>
#include<iostream>
using namespace std;

class Point
{
  public:
  Point(int i, int j) : x(i), y(j) {}
  void print(void) const { cout << "(" << x << "," << y << ")" << endl; }
  int norm2(void) const { return x*x + y*y; }
  bool operator<(const Point& p) const
  {
    return norm2() < p.norm2();
  }
  private:
  int x,y;
};

int main()
{
  set<Point> s;
  // generate points in a square [-2,2]x[-2,2]
  for ( int i = -2; i <= 2; i++ )
    for ( int j = -2; j <= 2; j++ )
      s.insert(Point(i,j));

  for ( set<Point>::iterator i = s.begin(); i != s.end(); i++ )
    (*i).print();
}
