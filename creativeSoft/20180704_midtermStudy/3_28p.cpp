#include <stdio.h>
int main(){
  int num1=10,num2=20,num3=30;
  int *x[3]={&num1,&num2,&num3};
  
  printf("%d %d %d\n",**x,**(x+1),**(x+2));
  printf("%d %d %d\n",*x[0],*x[1],*x[2]);
  return 0;
}
