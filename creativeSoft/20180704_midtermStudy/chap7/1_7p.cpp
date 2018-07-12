#include <iostream>
#include <string>
#include <iterator>
#include <set>
using namespace std;
int main(){
  set<string> word_array;
  while(true){
    string inputs;
    cin>>inputs;
    if(inputs=="quit")
      break;
    else if(inputs=="add"){
      string words;
      cin>>words;
      word_array.insert(words);
    }
    else if(inputs=="list"){
      for(set<string>::iterator itr=word_array.begin(); itr!=word_array.end(); ++itr)
	cout<<(itr==word_array.begin()?"'":" '")<<*itr<<"'";
      if(!word_array.empty())
	cout<<"\n";
      cout<<word_array.size()<<" words(s)."<<endl;
    }
    else if(inputs=="erase"){
      string words;
      cin>>words;
      set<string>::const_iterator itr= word_array.find(words);
      //set<string>::const_iterator itr =find(word_array.begin(),word_array.end(),words)
      if(itr == word_array.end())
	cout<<"'"<<words<<"'"<<"not found"<<endl;
      else{
	word_array.erase(itr);
	cout<<"'"<<words<<"' is erased.'"<<endl;
      }
    }
    else if(inputs=="find"){
      string words;
      cin>>words;
      set<string>::const_iterator itr= word_array.find(words);
      if(itr==word_array.end())
	cout<<"'"<<words<<"'"<<" not found."<<endl;
      else
	cout<<"'"<<words<<"'"<<" is in set."<<endl;
    }

    else if(inputs=="clear"){
      word_array.clear();
      cout<<"cleared."<<endl;
    }

  }
  
}
