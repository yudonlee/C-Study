#include <iostream>
using namespace std;
class Calc{
protected://private error.
  int a,b,c;
public:
  void Prn();
  Calc(int new_A,int new_B);
  Calc();
};
void Calc::Prn(){
  cout<<a<<"\t"<<b<<"\t"<<c<<endl;
}
Calc::Calc(int new_A,int new_B){
  a=new_A;
  b=new_B;
  c=0;
}
Calc::Calc(){
  a=1;
  b=0;
  c=0;
}
class Add: public Calc{
public:
  void Sum();
  Add(int new_A,int new_B);
  Add();
};
void Add::Sum(){
  c =a+b;

}

Add::Add(int new_A,int new_B):Calc(new_A, new_B)// int new_A error!
{
  //a=new_A; if they exist no error. if they dont exist no error 
  //b=new_B;
  //c=0;
}
Add::Add():Calc(){
}
int main(){
  Calc x(3,5);
  x.Prn();
  Add y(3,5);
  y.Prn();
  Add z;
  //z.Sum(); if implementation c =1 cout
  z.Prn();
  
  return 0;
}
