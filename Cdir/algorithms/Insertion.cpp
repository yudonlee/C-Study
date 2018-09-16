#include <iostream>
using namespace std;
void insertionSort(int *ptr,int N) {
  int j,p;
  int Tmp;
  for(int p=1;p<N;p++ ){
    Tmp=ptr[p];
    for(j=p;j>0&&ptr[j-1]<Tmp;j--)
      ptr[j]=ptr[j-1];
    ptr[j]=Tmp;
  }
}
int main(){
  int a;
  cin>>a;
  int* tmp = new int[a];
  for(int i=0;i<a;i++){
    int inNum;
    cin>>inNum;
    tmp[i] =inNum;
    insertionSort(tmp,i+1);
     }
  for(int j=0;j<a;j++){
    cout<<tmp[j]<<endl;
  }
  delete(tmp);
  return 0;

}
