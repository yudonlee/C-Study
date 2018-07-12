#include "omok.h"


int Omok::put(int x, int y){
  char put;
  if(!(x>=0&&x<width_)) return NOBODY;
  else if(!(y>=0&&y<height_)) return NOBODY;
  else if(board[y][x]!='.') return NOBODY;
  if(turn_==NOBODY||turn_==WHITE) put='o';
  else if(turn_==BLACK) put='x';	
  board[y][x]=put;
  if(put=='o')	turn_=BLACK;
  else if(put=='x')	turn_=WHITE;
  return turn_;
}

void Omok::IsOmok(int* winner) const{
  int link_num;
  for(int i=0;i<height_;++i){
    for(int j=0;j<width_;++j){
      if(board[i][j]!='.'){
	if(i==0&&j==0){
	  int ti=i;
	  int tj=j;
	  
	  for(link_num=1;board[ti][tj]==board[ti][tj+1];link_num++)	{tj++;}
	  if(link_num==5) goto end_omok;        
	  for(link_num=1;board[ti][tj]==board[ti+1][tj];link_num++)	{ti++;}
	  if(link_num==5) goto end_omok;  
	  for(link_num=1;board[ti][tj]==board[ti+1][tj+1];++link_num)	{ti++;tj++;}
	  if(link_num==5) goto end_omok;
	  
	}

	else if(i==0){
	  int ti=i;
	  int tj=j;
	  
	  if(board[ti][tj-1]!=board[ti][tj]){	
	    for(link_num=1;(tj+1<width_)&&(board[ti][tj]==board[ti][tj+1]);link_num++)	{tj++;}
	    if(link_num==5) goto end_omok;
	  }
	  
	  for(link_num=1;board[ti][tj]==board[ti+1][tj];++link_num)	{ti++;}
	  if(link_num==5) goto end_omok;        
	  for(link_num=1;(tj+1<width_)&&(board[ti][tj]==board[ti+1][tj+1]);++link_num)	{ti++;tj++;}
	  if(link_num==5) goto end_omok;        
	  for(link_num=1;(tj-1>=0)&&(ti+1<height_)&&(board[ti][tj]==board[ti+1][tj-1]);++link_num)	{ti++;tj--;}
	  if(link_num==5) goto end_omok;        
	}
	else if(j==0){
	  int ti=i;
	  int tj=j;
	  
	  for(link_num=1;board[ti][tj]==board[ti][tj+1];link_num++)	{tj++;}
	  if(link_num==5) goto end_omok;
	  
	  if(board[ti-1][tj]!=board[ti][tj]){						for(link_num=1;(ti+1<height_)&&(board[ti][tj]==board[ti+1][tj]);++link_num)	{ti++;}
	    if(link_num==5) goto end_omok;
	  }
	  
	  for(link_num=1;(ti+1<height_)&&(board[ti][tj]==board[ti+1][tj+1]);++link_num)	{ti++;tj++;}
	  if(link_num==5) goto end_omok;
      }
      
      else {
	int ti=i;
	int tj=j;
	if(board[ti][tj-1]!=board[ti][tj]){
	  for(link_num=1;(tj+1<width_)&&(board[ti][tj]==board[ti][tj+1]);link_num++)	{tj++;}
	  if(link_num==5) goto end_omok;
	}
	
	if(board[ti-1][tj]!=board[ti][tj]){
	  for(link_num=1;(ti+1<height_)&&(board[ti][tj]==board[ti+1][tj]);++link_num)	{ti++;}
	  if(link_num==5) goto end_omok;
	}	
	if(board[ti-1][tj-1]!=board[ti][tj]){   
	  for(link_num=1;(tj+1<width_)&&(ti+1<height_)&&(board[ti][tj]==board[ti+1][tj+1]);++link_num)	{ti++;tj++;}
	  if(link_num==5) goto end_omok;	
	}
	if((tj+1<width_)&&(board[ti-1][tj+1]!=board[ti][tj])){  
	  for(link_num=1;(tj-1>=0)&&(ti+1<height_)&&board[ti][tj]==board[ti+1][tj-1];++link_num)	{ti++;tj--;}
	  if(link_num==5) goto end_omok;	
	}
      }
    }
  }
}

end_omok:
	if(link_num==5){
	  if(turn_==BLACK){
	    *winner=BLACK;
	  }
	  else	{
	    *winner=WHITE;
	  }
	}
	else	{
	  *winner=NOBODY;
	}
}

std::ostream& operator<<(std::ostream& os, const Omok& omok) {
  vector<string> board_=omok.board;
  for(vector<string>::iterator itr=board_.begin();itr!=board_.end();++itr){
    for(size_t i=0; i<(*itr).size();++i){
      os<<(*itr)[i]<<" ";
    }
    os<<endl;
  }
  return os;
}
