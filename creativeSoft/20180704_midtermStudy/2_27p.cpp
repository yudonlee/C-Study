#include <iostream>
using namespace std;
int main(){
  char x[5] = {'t','e','s','t','\0'};
  x[0] = 'T';
  char elt3 = *x;
  cout<<elt3<<endl;
  return 0;
}
