#include <iostream>
#include <string>
using namespace std;
class Animal{
protected:
  int age;
  int weight;
public:
  Animal(int age,int weight);
  Animal();
  void sleep();
  void eat();
  void speak();
  void print();

};
Animal::Animal(int age,int weight){
  this->age=age;
  this->weight=weight;
}
Animal::Animal(){

}
void Animal::sleep(){
  cout<<"sleep."<<endl;
}

void Animal::eat(){
  cout<<"eat."<<endl;
}
void Animal::speak(){
  cout<<"jjack jjack \n";

}
void Animal::print(){
  cout<<"age \t:"<<age <<"\n";
  cout<<"weight \t:"<<weight<<"\n";
}
class Dog: public Animal{
  string breed;
public:
  Dog(int age,int weight, string breed);
  void speak();
  void print();
};
Dog::Dog(int age,int weight, string breed):Animal(age,weight)
{
  this->breed=breed;
}
void Dog::speak(){
  cout<<"meong meong"<<endl;
}
void Dog::print(){
  Animal::print();
  cout<<"breed \t"<<breed<<"\n";
}
class Bird:public Animal{
public:
  Bird(int age,int weight);
  void speak();
};
Bird::Bird(int age,int weight):Animal(age,weight)
{
}
void Bird::speak(){
  cout<<"jjack jjack"<<"\n";
}
int main(){
  Dog dog(3,7,"maltese");
  dog.print();
  dog.sleep();
  dog.speak();
  cout<<"-------------------------\n";
  Bird bird(1,3);
  bird.print();
  bird.sleep();
  bird.speak();
  


}
  
