//
// sort5.cpp
//
// sorting points by distance on a rectangular grid

#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

class Point
{
  public:
  Point(int i, int j) : x(i), y(j) {}
  void print(void) { cout << "(" << x << "," << y << ")" << endl; }
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
  vector<Point> pts;
  // generate points in a square [-2,2]x[-2,2]
  for ( int i = -2; i <= 2; i++ )
    for ( int j = -2; j <= 2; j++ )
      pts.push_back(Point(i,j));

  for ( unsigned int i = 0; i < pts.size(); i++ )
    pts[i].print();

  sort(pts.begin(), pts.end());

  cout << "after sort:" << endl;
  for ( unsigned int i = 0; i < pts.size(); i++ )
    pts[i].print();

}
