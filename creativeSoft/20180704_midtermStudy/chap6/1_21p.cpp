//#include <vector>
#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<double>v1(10,0.5);
  v1.resize(20);
  
  for(vector<double>::const_iterator it= v1.begin(); it!=v1.end();it++)
    cout<<"vector is: "<<*it;

  return 0;
}
