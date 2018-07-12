#include <iostream>
using namespace std;
void func() throw(int){
  int a=1;
  throw a;
}
int main(){
  try{

    func();
  }
  catch(int){

    cout<<"ERROR"<<endl;
  }
}
