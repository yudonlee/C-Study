#include <iostream>
using namespace std;
class A{
public:
  A(){
    cout<<"A         empty constrcutor call"<<endl;
  }
  A(int a,int b){
    this->a =a;
    this->b =b;
    cout<<"A   constrcutor call A is:"<<a<<"B is: "<<b<<endl;
  }
  ~A(){
    cout<<"A            empty destructor call"<<endl;
  }
private:
  int a,b;
};
class B:public A{
public:
  B(){
    cout<<"B         empty B constrcutor call"<<endl;
  }
  B(int a,int b){
    cout<<"constrcuotr B is called A:"<<a<<" B : "<<b<<endl;
  }
  ~B(){
    cout<<"B            empty B destrcutor call"<<endl;
  }
};
class C{
public:
  C(){
    cout<<"C empty constrcutor call"<<endl;
  }
  ~C(){
    cout<<"C empty destrcutor call"<<endl;
  }
};
class D:public C{
 private:
  int a,b;
 public:
  D(){
    cout<<"D  empty constrcutor call"<<endl;
  }
  ~D(){
    cout<<"D empty destrcutor call"<<endl;
  }
  D(int a,int b){
    this->a =a;
    this->b =b;
    cout<<"D call parameter constructor a is"<<a<<" b is "<<b<<endl;
  }

};
int main(){

  B BB(3,5);
  B b;
  D DD(3,5);
  D d;
}
