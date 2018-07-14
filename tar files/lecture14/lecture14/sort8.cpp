//
// sort8.cpp
//
// sort points by increasing x coordinate
// and then by norm using stable_sort

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
  { return norm2() < p.norm2(); }
  int getX(void) const { return x; }
  int getY(void) const { return y; }
  private:
  int x,y;
};

bool xless(const Point& p1, const Point& p2)
{ return p1.getX() < p2.getX(); }

int main()
{
  vector<Point> pts;
  // generate points in a square [-2,2]x[-2,2]
  // use decreasing indices
  for ( int i = 2; i >= -2; i-- )
    for ( int j = 2; j >= -2; j-- )
      pts.push_back(Point(i,j));

  // randomize points
  random_shuffle(pts.begin(),pts.end());

  for ( unsigned int i = 0; i < pts.size(); i++ )
    pts[i].print();

  sort(pts.begin(), pts.end(), xless);
  cout << "after sort by xless:" << endl;
  for ( unsigned int i = 0; i < pts.size(); i++ )
    pts[i].print();

  stable_sort(pts.begin(), pts.end());
  cout << "after stable_sort by norm:" << endl;
  for ( unsigned int i = 0; i < pts.size(); i++ )
    pts[i].print();
}
