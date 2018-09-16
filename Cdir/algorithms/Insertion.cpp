#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int* tmp = new int[n];
  for(int i=0;i<n;i++)
    cin>>tmp[i];
  for(int i=1;i<n;i++){
    int temp =tmp[i];
    int j=i-1;
    while(temp>tmp[j] && j>=0){
      tmp[j+1] =tmp[j];
      --j;
    }
    tmp[j+1]=temp;
  }
  for(int j=0;j<n;j++)
    cout<<tmp[j]<<endl;
  delete(tmp);
  return 0;
}
