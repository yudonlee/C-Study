#include <iostream>
using namespace std;
class A{
public:
  virtual void power_on() =0;
  virtual ~A(){}
};
class B:public A{
public:
  void power_on(){
    cout<< "power on!"<<endl;
  }
  void testpointer(){
    cout<<"Abstract pointer can run func!"<<endl;
  }

};
class C{
public:
  C(){cout<<"constrcutor c ";}
  virtual ~C(){cout<<"destrcutor c "<<endl;}
  virtual void power_off(){
    cout<<"power_off "<<endl;
  }
  
};
class D:public C{
public:
  D(){cout<<"constructor D ";}
  ~D(){cout<<"destrctor D ";}
  virtual void power_off(){
    cout<<"power_off of D"<<endl;
  }
  void power_push(){
    cout<<"power_push"<<endl;
  }

};
int main(){
  A* a = new B;
  a->power_on();
  //class a has no member func  a->testpointer();
  C* c = new D;
  c->power_off();
  delete c;
  D* d = (D*)new C;
  d->power_off();
  delete d;
  
  //error Class C has no member func c->power_push();
}
