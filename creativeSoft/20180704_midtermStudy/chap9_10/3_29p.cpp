#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
  vector<int> v(8);
  for(int i=0; i<v.size(); i++){
    v[i] = i+1;
  }
  vector<int>::iterator it;
  for(it=v.begin();it!=v.end();it++){
    *it=*it+1;
    cout<<"it is"<<*it;
    cout<<"v is"<<v[0];
  }
  return 0;
}
