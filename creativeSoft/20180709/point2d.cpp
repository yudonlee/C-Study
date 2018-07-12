#include "point2d.h"

Point::Point():x_(0),y_(0){}
Point:: Point(int x,int y):x_(x),y_(y){}
Point:: Point(const Point& p){
  x_=p.x_;
  y_=p.y_;
  name =p.name;
}
Point:: explicit Point(int c):x_(c),y_(c){}
  
  
Point operator+(const Point& lhs, const Point& rhs){
  Point tmp;
  tmp.x_ = lhs.x_ + rhs.x_;
  tmp.y_ = lhs.y_ + rhs.y_;
  return tmp;
}
Point operator-(const Point& lhs, const Point& rhs){
  Point tmp;
  tmp.x_ = lhs.x_ - rhs.x_;
  tmp.y_ = lhs.y_ - rhs.y_;
  return tmp;
}
Point operator*(const Point& lhs, const Point& rhs){
  Point tmp;
  tmp.x_ = lhs.x_ * rhs.x_;
  tmp.y_ = lhs.y_ * rhs.y_;
  return tmp;
}
