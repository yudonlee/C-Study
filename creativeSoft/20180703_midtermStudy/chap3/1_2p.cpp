#include <iostream>
using namespace std;
int main(){
  const int* p1;
  int a,b;
  p1=&a;
  
  a=30;
  cout<<"*p is:"<<*p1<<endl;
  a=40;
  cout<<"*p is:"<<*p1<<endl;
  return 0;
  
}
