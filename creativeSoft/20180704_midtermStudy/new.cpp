#include <iostream>
using namespace std;
int main(){
  int result =0;
  int data=5;
  result = ++data +2;
  cout<<result<<endl;
  int a=0,b=0;
  a = b++ + b++;
  cout<<"++b + b++"<<a<<b<<endl;
  int q=0,w=0;
  w = q++ + ++q;
  cout<<"q++ + ++q"<<w<<q<<endl;
  int s=0,d=0;
  d = ++s + ++s;
  cout<<"++s + ++s"<<d<<s<<endl;
  int p=0,h=0;
  h = ++p + ++p;
  cout<<"++p + ++p"<<h<<p<<endl;
}
