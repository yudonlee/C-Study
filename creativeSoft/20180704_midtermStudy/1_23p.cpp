#include <iostream>
using namespace std;
char * get_pointer(){
  //char x=0  addred of local varaible 'x' returned local!!!!
  static char x=0;
  return &x;
  
}
int main(){
  char *ptr =get_pointer();
  *ptr=12;
  
}
