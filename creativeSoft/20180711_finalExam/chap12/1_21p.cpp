#include <iostream>
using namespace std;
class NoMilk{
public:
  NoMilk(){}
  NoMilk(int howMany){
    count=howMany;
    cout<<"haha exception constructor execute"<<endl;
    cout<<"Go buy some milk\n";
  }
  ~NoMilk(){
    cout<<"Haha destrcutor execute"<<endl;
  }
  int getCount() const{return count;}
private:
  int count;
};
int main(){
  while(true){
  int donuts,milk;
  cout<<"Enter number of donuts";
  cin>>donuts;
  cout<<"Enter number of glasses of milk.";
  cin>>milk;
  if(milk<=0)
    throw NoMilk(donuts);
  int dpg = donuts/milk;
  cout<<donuts<<"donuts\n";
  cout<<milk<<"glasses of mlik\n";
  cout<<"You have "<<dpg;
  cout<<"donuts for each glass of milk.\n";
  }
  return 0;
}
