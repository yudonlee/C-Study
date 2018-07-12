#include <string>
struct Point{
  string name;
  int x_,y_;
  Point();
  Point(const Point& p);
  explicit Point(int c);
  Point(int x,int y);
};
Point operator+(const Point& lhs, const Point& rhs);
Point operator-(const Point& lhs, const Point& rhs);
Point operator*(const Point& lhs, const Point& rhs);

