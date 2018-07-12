#include <vector>
#include <iostream>
using namespace std;
int main(){
  vector<vector<int>>vi(10);
  for(int i=0;i<vi.size();++i)
    vi[i].resize(5,0);
  for(int i=0;i<vi.size();++i){
    for(int j=0;j<vi[i].size();j++)
	  cout<<" " <<vi[i][j];
      }
  vector<vector<int>>vi2(10,vector<int>(5,0));
  cout<<"\n" ;
return 0;
}
