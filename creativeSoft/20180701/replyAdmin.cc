#include "replyAdmin.h"
ReplyAdmin::ReplyAdmin(){
  chats = new string[NUM_OF_CHAT];
  addChat("Hello, Reply Administrator!");
  addChat("I will be a good programmer");
  addChat("This class is awesome");
  addChat("Professor Lim is wise");
  addChat("Two TAs are kind and helpful");
  addChat("I think male TA looks cool.");
  
}
ReplyAdmin::~ReplyAdmin(){
  delete[] chats;
}
int ReplyAdmin::getChatCount(string &_chatList){
  int i;
  for(i=0;i<NUM_OF_CHAT; i++){
    string s = _chatList[i];
    if(s.empty()==true)break;
  }
  return i;
    
  
}
bool ReplyAdmin::addChat(stirng _chat){
  int count = getChatCount();
  chats[count]=_chat;
  return true;  
}
bool ReplyAdmin::removeChat(int _index){
  int count= getChatCount();
  if(_index<0||_index>=count)
    return false;
  for(int i=_index;i<count; i++){
    chats[i]=chat[i+1];
  }
  chats[count-1]="";
  return true;
}
bool ReplyAdmin::removeChat(int* _indices,int _count){
   

}
