#include <iostream>
using namespace std;
void swap(int *a,int *b){
  int t;
  t = *a;
  *a = *b;
  *b =t;
  
}
void sort(int* array,int argc){
  for(int i=0;i<argc;i++){
    for(int j=i+1;j<argc;j++){
      if(array[i]>array[j]){
	swap(&array[i],&array[j]);
      }
    }
  }
}

  
    

int main(){
  int n;
  cin >>n;
  int* array = new int[n];
  for(int i=0; i<n;++i){
    cin>>array[i];
  }
  sort(array,n);
  for(int i=0;i<n;++i){
    cout<<array[i]<< " ";
  }
  cout<<endl;
}
