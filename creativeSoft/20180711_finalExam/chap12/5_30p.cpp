#include <iostream>
using namespace std;
void ThrowOne(){
  throw string("'Exceptiooon!'");
}
void callOne(){
  ThrowOne();
}
void callTwo(){
  try{
    callOne();
  }
  catch(MyException e){
    cout<<"Caught a MyException! '"
	<<e.msg<<"'"<<endl;
  }
}
int main(){
  try{
    callTwo();
  }
  catch(MyException e){
    cout<<"Caaauth an exception'"
	<<e.msg<<"'"<<endl;
  }
  return 0;

}
