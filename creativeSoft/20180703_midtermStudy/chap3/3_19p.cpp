#include <iostream>
#include <assert.h>
using namespace std;
int main(){
  int a= 10;
  int z=10;
  int& b =a;
  b=z;
  b=20;
  assert(a==20 && b==20);
  int *p =&a;
  *p = 30;
  assert(a==30 && *p ==30);
  //declared but not initalized so error !!! int& bb; diffrenrent pointer int *p1;
  const int& c =a;
  //of course error c=10;
  a=10;
  assert(a==10& b==10);
}
