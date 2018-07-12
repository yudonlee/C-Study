#include <iostream>
using namespace std;
int main(){
  const int ci=10;
  int* pi =const_cast<int*>(&ci);
  *pi =100;
}
