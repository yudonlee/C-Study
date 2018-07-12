#include <iostream>
using namespace std;
class A{
public:
  void APublic(){}
protected:
  void AProtected(){}
private:
  void APrivate(){}

};
class BA:protected A{
public:
  void BAPublic(){
    APublic();
    AProtected();
    //APrivate();
  }
protected:
  void BAProtected(){
  }
private:
  void BAPrivate(){
  }

};
class Client : public BA{
  void Function(){
    APublic();
    AProtected();
    //APrivate();
    BAPublic();
    BAProtected();
    //BAPrivate();
  }
};
int main(){
  BA ba;
  //ba.APublic();
  ba.BAPublic();
  ba.BAProtected();
}
