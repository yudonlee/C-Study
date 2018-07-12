#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

const int NUM_OF_CHAT=200;

int getChatCount(string *_chatList){
	int i;
	for(i=0;i<NUM_OF_CHAT; i++){
		string s=_chatList[i];
		if(s.empty()==true) break;
	}
	return i;
}

void printChat(string *_chatList){
	int count=getChatCount(_chatList);
	for(int i=0; i<count; ++i){
		cout<<i<<" "<<_chatList[i]<<endl;
	}
}

bool addChat(string *_chatList, string _chat){
	int count=getChatCount(_chatList);
	_chatList[count]=_chat;
	return true;
}
bool removeChat(string *_chatList, int _index){
	int count=getChatCount(_chatList);
	for(int i=_index; i<count-1;i++){
		_chatList[i]=_chatList[i+1];
	}
	_chatList[count-1]="";
	return true;
} 

int main(void){
	string *chats=new string[NUM_OF_CHAT];

	addChat(chats,"Hello, Relpy Administrator!");
	addChat(chats,"I will be a good programmer.");
	addChat(chats,"This class is awesome.");
	addChat(chats,"Professor Lim is wise.");
	addChat(chats,"Two TAs are kind and helpful.");
	addChat(chats,"I think TAs look cool.");
	while(true){
    string command;
    bool result;
    getline(cin, command);
    if((command.find("#quit"))!= string::npos)
      break;
    else if(command.find("#remove")!=string::npos){
      string s_index = command.substr(8);
      if(s_index.find(",")!=string::npos){
	for(int i =0;i<s_index.length();i++){
	  int b = 2*i;
	  int a = s_index[b];
	  result = removeChat(chats,a);
	}
      }
      else if(s_index.find("-")!=std::string::npos){
	for(int i =s_index[0];i<s_index[2]+1;i++){ //remove scope s_index =1-2 so s_index[0] ,s_index[2] 
	  result = removeChat(chats,i);
	}
      }
      else{
	int num;
	sscanf(s_index.c_str(),"%d",&num);
	if(num<getChatCount(chats)&&num>0)
	  result=removeChat(chats,s_index[0]);
      }
      if(result){
	printChat(chats);
	  }
    }
    else if(addChat(chats,command)){
	    printChat(chats);
	    }
      }
        

	delete[] chats;

	return 0;
}
