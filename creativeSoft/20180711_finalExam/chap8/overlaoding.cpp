#include <iostream>
using namespace std;
int plus(int x,int y){
  int result = x+y;
  return result;
}
double plus(double x,double y){
  double result =x+y;
  return result;
}
int main(){
  cout<<plus(3,5)<<endl;
  cout<<plus(3.5,5.5)<<endl;
  return 0;

}
