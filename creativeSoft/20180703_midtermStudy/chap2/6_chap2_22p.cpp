#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int* int_instance = new int;
  int* array = new int[n];
  //*int_instance = n;
  *array = n;
  cout<<"* int_instance value is: "<<*int_instance<<endl;
  cout<<"*array[0] is : "<<*array<<"*array[1] is"<<*(array+1)<<endl;
  delete int_instance;
  delete[] array;
    }
