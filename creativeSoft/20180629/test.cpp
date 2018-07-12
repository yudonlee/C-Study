void IncorrectAccess(int* array,int i,int n){
  if(i<n){
    array[i] = 0;
    IncorrectAccess(array, i+1,n);
  }
}
int main(){
  int array[10];
  IncorrectAccess(array,0,20);
  return 0;
}
