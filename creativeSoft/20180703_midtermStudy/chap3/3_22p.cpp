#include <iostream>
using namespace std;
struct Triplet{int a,b,c;};
void test(const Triplet ct,const Triplet* cr){
   printf("%d %d %d",ct.a,cr->b,ct.c);
}
int main(){
  Triplet triplet;
  triplet.a = 10,triplet.b=20,triplet.c =30;
  test(triplet,&triplet);
}
