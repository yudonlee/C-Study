#include <iostream>
using namespace std;
int a;
int b =30;
void sub1();
void sub2();

int main(){
  cout<<"\n main a (file1.cpp)==>"<<a;
  sub1();
  sub2();
  cout<<"\n main a (file1.cpp)==>"<<a;
  cout<<"\n main b (file1.cpp)==>"<<b<<"\n";
  sub1();
  sub2();
  cout<<"\n main a(file1.cpp)==>"<<a;
  cout<<"\n main b(file2.cpp)==>"<<b<<"\n";
  return 0;


}
