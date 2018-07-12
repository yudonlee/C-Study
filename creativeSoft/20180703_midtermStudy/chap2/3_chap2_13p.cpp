#include <iostream>
using namespace std;
int main(){
  int a=10;
  int* p =&a;
  cout<<"*p="<<*p<<endl;
  *p=20;
  cout<<"a="<<a<<endl;
  int array[3] ={1,2,3};
  p=array;
  int *q = &array[2];
  int** pp = &p;
  cout <<"*pp ="<<*pp<<"   p= "<<p<<endl;
  cout<<"**pp="<<**pp<<endl;
  pp =&q;
  cout<<"*pp=  "<<*pp<<"q= "<<q<<endl;
  cout<<"**pp= "<<**pp<<endl;
}
