#include <iterator>
#include <vector>
#include <iostream>
using namespace std;
int main(){
  int arr[10] = {3,5,1,4,8,7,0,9,2,6};
  vector<int> v(10);
  copy(arr,arr+10,v.begin());
  cout<<" no : output"<<endl;
  copy(v.begin(),v.end(),ostream_iterator<int>(cout));
  cout<<"yes : output"<<endl;
  ostream_iterator <int> out_iter(cout," : ");
  copy(v.begin(),v.end(),out_iter);
  cout<< "reverse output"<<endl;
  copy(v.rbegin(),v.rend(),out_iter);
  cout<<"\n\n";
}
