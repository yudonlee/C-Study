#include <iostream>
using namespace std;
void ThrowExcept(){
  throw string("Exception!");
}
void DoSomething(){
  cout<<"Do something called.";
  ThrowExcept();
  cout<<"Do something flow is execute"<<endl;
}
int main(){
  try{
    DoSomething();
  }
  catch(string s){
    cout<<"Caught an exception'"
	<<s<<"'"<<endl;

  }
  cout<<"All done"<<endl;
  return 0;
}
