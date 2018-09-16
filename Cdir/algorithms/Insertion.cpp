#include <iostream>
using namespace std;
void insertionSort(int *ptr,int N) {
  int j,p,Tmp;
  for(int p=1;p<N;p++ ){
    Tmp=ptr[p];
    for(j=p;j>0&&ptr[j-1]<Tmp;j--)
      ptr[j]=ptr[j-1];
    ptr[j]=Tmp;
  }
}
int main(){
  int n;
  cin>>n;
  int* tmp = new int[n];
  for(int i=0;i<n;i++)
    cin>>tmp[i];
  insertionSort(tmp,n);
  for(int j=0;j<n;j++)
    cout<<tmp[j]<<endl;
  delete(tmp);
  return 0;

}
