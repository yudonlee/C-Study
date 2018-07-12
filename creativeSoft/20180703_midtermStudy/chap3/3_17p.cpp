#include <iostream>
using namespace std;
void TestCOnst(int a,const int b,char* p,const char* cp){
  int i=a,j=b;
  a = i*2;
  
}
int main(){
  const int b =3;
  char* p;
  p[0] = 'a';
  char* q = NULL;
  const char* cp="a";
  const char* cq = "Hello";
  p=q,cp=q;
  cout<<*cp<<" "<<endl;
  cp=cq;
  cout<<*cp<<" " <<*cq<<endl;
  //read only *cp = "q";
  //*cq = "Q";
  // read only cout<<*cq<<endl;
}
