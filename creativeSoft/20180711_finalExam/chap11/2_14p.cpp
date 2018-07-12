#include <iostream>
using namespace std;
struct Shape{
  int a;
  virtual void Draw() const =0;
public:
  Shape(){
    a=0;
  }
  Shape(int a){
    a+=2;
    this->a = a;
    //if a 3 draw Tri printout
  }
  void getA(){
    cout<<"finally a is: "<<a<<endl;
  }
  void Drink() {
    a+=3;
    cout<<a<<" Drink..Shape"<<endl;
  }
};
struct Triangle:public Shape{

  virtual void Draw()const{
    cout<<a<<"draw Tri"<<endl;
  }
public:
  Triangle(int a):Shape(a){}
  void Drink() {
    Shape::Drink();
    cout<<a<<"Drink Tri"<<endl;
  }
  //void Drink() {
  // Shape::Draw();
  // cout<<"Drink Tri"<<endl;
  //}
};
struct Rectangle :public Shape{
public:
  Rectangle(int a):Shape(a){}
  virtual void Draw() const{
    cout<<"draw Rect"<<endl;
  }
  void Drink() {
    cout<<a<<"Drink Rect"<<endl;
    Shape::Drink();
  }
  //void Drink() {
  // Shape::Drink();
  // cout<<"Drink Shape"<<endl;
  //}
};
struct A{

};
int main(){
  // A a;
  //Shape shape; error cannot declare 
  //shape.Drink();
  Triangle tri(3);
  Rectangle rect(5);
  tri.Draw();
  tri.Drink();
  tri.Draw();
  tri.Drink();
  tri.Draw();
  tri.Drink();
  tri.getA();
  cout<<"------------------\n\n\n";
  rect.Draw();
  rect.Drink();
  rect.Draw();
  //a.Drink();
}
