#include <iostream>
using namespace std;
int func_cbv(int a_in){
  a_in++;
}
int func_cbr(int* pa_in){
  (*pa_in)++;
}

int main(){
  int a= 10;
  int *pa = &a;
  func_cbv(a);
  cout << "Result: "<<a <<endl;

  func_cbr(pa);
  cout <<"Result: "<<a <<endl;
}
