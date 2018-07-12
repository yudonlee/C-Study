#include <vector>
struct Shape{
  virtual ~Shape(){}
  virtual void Draw() const =0;
  virtual int GetArea() const =0;
  virtual void MoveTo(int x,int y)=0;
};
void DrawShapes(const vector<Shape*>& v){
  for(int i=0; i<v.size();++i){
    (*(v+i)).Draw();
  }

}
