#include<stdio.h>
#include <stdlib.h>
int main(){
  int n;
  scanf("%d",&n);
  //int* malloc_array =(int*) malloc(sizeof(int)*n);// (int*) essential
  //int* malloc_array =(int*) malloc(sizeof(long)*n); //sticker memo reference
  int* malloc_array =(int *)malloc(4*n);
  for(int i=0; i<n; i++){
    *(malloc_array+i)=i;
  }
  for(int i=0;i<n;i++){
    printf("%d",*(malloc_array+i));
  }
  free(malloc_array);
  return 0;
}
