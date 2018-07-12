#include <iostream>
using namespace std;
int main(){
  int a =10;
  cout<<" a = "<<a<<endl;
  {
    int a =20;
    cout<<"a ="<<a<<endl;
    {
      a+=20;
      cout<<"a is ="<<a<<endl;
    }
    cout<<"a="<<a<<endl;
  }
  cout<<"a is ="<<a<<endl;
  return 0;
}
