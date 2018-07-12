#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
  map<string, string> word_map;
  while(true){
    string inputs;
    cin>>inputs;
    if(inputs=="quit") break;
    else if(inputs =="add"){
      string key;
      string value;
      cin>>key>>value;
      word_map[key] = value;
      //word_map.insert(make_pair(key,value));
    }
    else if(inputs=="clear"){
      word_map.clear();
      cout<<"cleared."<<endl;
    }
    else if(inputs=="list"){
      for(map<string, string>::const_iterator itr = word_map.begin();
	  itr !=word_map.end(); ++itr){
	cout<<(itr == word_map.begin() ? "[" : " [")<< (*itr).first //itr->first
	    <<" : " << (*itr).second<<"]";
      }
      if(!word_map.empty()) cout<<endl;
      cout<<word_map.size()<<" word mapping(s)"<<endl;
      
    }
    else if(inputs=="erase"){
      string words;
      cin>> words;
      map<string, string>::const_iterator itr = word_map.find(words);
      if(itr == word_map.end()){
	cout<<"'"<<words<<"' not found"<<endl;
      }
      else{
	cout<<"'"<<words<<"' is erased."<<endl;
	word_map.erase(words);
      }
    }
    else if(inputs=="find"){
      string words;
      cin >>words;
      map<string, string>::const_iterator itr = word_map.find(words);
      if(itr==word_map.end())
	 cout<<"'"<<words<<"' not found"<<endl;
      else
	cout<<itr->first<<" : "<<itr->second<<" found"<<endl;
    }
    

  }

}
