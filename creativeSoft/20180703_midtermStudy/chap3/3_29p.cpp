#include<iostream>
#include <assert.h>
using namespace std;
void teleScope(int n){
  cout<<"first n is:"<<n<<endl;
  for(int i =10;i<n;++i){
    int n=20;
    for(int j=0;j<n;++j){
      int n=30;
      cout<<"n is"<<n<<endl;
         }
    //error! cout<<"j is:"<<j<<endl;
    assert(n==20);

  }
  cout<<"last n is:"<<n<<endl;

}
int main(){
    teleScope(10);
    return 0;
}
