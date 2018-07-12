#include <iostream>
using namespace std;
int main(){
  int num=85;
  int num1 =85;
  bool istrue;
  bool intrue;
  bool i = true;
  cout<<"!num value is :"<<!num<<endl;
  istrue = !num==70;
  cout<<"!num==70 :"<<istrue<<endl;
  intrue =!(num==70);
  cout<<"!(num==70): "<<intrue<<endl;
  intrue =!num==1;
  cout<<"!num=1 "<<intrue<<endl;
  intrue=!num==0;
  cout<<"!num==0 "<<intrue<<endl;
  return 0;
}
