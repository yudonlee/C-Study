#include "omok.h"
using namespace std;
Omok::Omok() : width_(GROUND_SIZE), height_(GROUND_SIZE), turn_(NOBODY) 
{
  for(int y=0;y<height_;y++){
    for(int x=0;x<width_;x++){
      board_[y][x]=0;
    }
  }
}

int Omok::Put(int x, int y)
{
  if (x < 0 || x >= width_ || y < 0 || y >= height_ || board_[y][x] != NOBODY)
    return NOBODY;
  
  if (turn_ == BLACK)
    turn_ = WHITE;
  else turn_ = BLACK;
  
  board_[y][x] = turn_;
  return turn_;
}

void Omok::IsOmok(int * winner)
{
  int dx[] ={-1,0,1,1};
  int dy[] ={1,1,1,0};
  *winner = NOBODY;
  for(int y=0;y<height_;y++)
    {
      for(int x=0;x<width_;x++)
	{
	  if (board_[y][x] != NOBODY)
	    {
	      int nowColor = board_[y][x];
	      for(int dir=0;dir<4;dir++)
		{
		  int sumStoneValue = 0;
		  for(int cnt=0;cnt<5;cnt++)
		    sumStoneValue += GetValue(y + cnt*dy[dir], x + cnt*dx[dir]);
		  if (sumStoneValue == nowColor * 5)
		    if (GetValue(y + 5 * dy[dir], x + 5 * dx[dir]) != nowColor &&  GetValue(y + -1 * dy[dir], x + -1 * dx[dir]) != nowColor)
		      *winner = nowColor;			
		}
	    }
	}
    }
}

int Omok::GetValue(int x, int y)
{
  if(x < 0 || x >= width_ || y < 0 || y >= height_ || board_[y][x] == NOBODY)
    return NOBODY;
  else return board_[y][x];
}


void draw(){
  for(int y=0;y<19;y++)
    {
      for(int x=0;x< 19;x++)
	{
	  if (board_[y][x] == NOBODY)
	    cout << '.';
	  else if ([y][x] == BLACK)
	    cout << 'o';
	  else if (board_[y][x] == WHITE)
	    cout << 'x';
	}
      cout<<endl;
    }


}
