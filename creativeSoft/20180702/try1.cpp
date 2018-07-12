#include <iostream>
using namespace std;
int main(){
  const int* a=4;
  int b;
  a= &b;
  cout<<"a is :"<<*a<<endl;
		      cout<<"b is :"<<b<<endl;

}
