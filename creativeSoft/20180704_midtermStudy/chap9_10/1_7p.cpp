#include <iostream>
using namespace std;
template <typename T>
T myabs(T num,T num2){

  return num+num2;
}
int main(){
  int a =-10;
  double b =5.0;
    cout<<a<<"jeoldaegabs is :"<<myabs(a,b)<<endl;
  return 0;
  
}
