#include <iostream>
using namespace std;
struct Shape{
  virtual void Draw() const{
    cout<<"Shape Draw"<<endl;
  }
};
struct Rectangle: public Shape{
  void Draw() const{
   cout<<"Rectangle Draw"<<endl;
  }
};
struct Triangle:public Shape{
  //void Draw() const{
  //}
  virtual void Draw() const{
    cout<<"Triangle Draw"<<endl;

    }
};
int main(){
  Rectangle rect;
  Triangle tri;
  rect.Draw();
  tri.Draw();


}
