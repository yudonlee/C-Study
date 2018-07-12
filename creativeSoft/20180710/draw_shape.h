#include <iostream>
#include <vector>
using namespace std;
class Canvas{
 private:
  friend ostream& operator<<(ostream& os, const Canvas& c);
  size_t _row,_col;
  vector<vector<char>>& Ref;
 public:
  Canvas(size_t row,size_t col);
  ~Canvas();
  void Resize(size_t w,size_t h);
  bool Draw(int x, int y, char brush);
  void clear();

};
class Shape{
 public:
  virtual ~Shape();
  virtual void Draw(Canvas* canvas) const=0;
 protected:
};
class Rectangle : public Shape{
  
};
class UpTriangle: public Shape{
};
class DownTriangle:public Shape{
};
class Diamond:public Shape{
};
istream& operator>>(istream& is,Rectangle& r);
istream& opeator>>(istream& is, UpTriangle& t);
istream& operator>>(istream& is,DownTriangle& d);
istream& operator>>(istream& is,Diamond& dm);
