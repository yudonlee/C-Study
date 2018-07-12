#include <iostream>
#include <string>
using namespace std;
void func(int a) {
  
  if(a==0)
    throw string("variable value is 0");
  else
    throw a;
}
int main(){
  try{
    func(10);
    //func(0); parameter type int so 0.5 == 0 okay? if you do notstring(" ") error fucx baby 
    //func(0.5);
  }
  catch(string str){
    cout<<str<<endl;

  }
  catch(int e){
    cout<<"due to number"<<e<<"exception happen!"<<endl;
  }
  return 0;

}
