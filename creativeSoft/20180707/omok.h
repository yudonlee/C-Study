#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <ostream>
#define BLACK -1
#define NOBODY 0
#define WHITE 1
#define GROUND_SIZE 19
using namespace std;
class Omok{
 public:
 Omok():width_(GROUND_SIZE),height_(GROUND_SIZE),turn_(NOBODY){
    string str ="";
    for(int i=0; i<width_; ++i){
      str+=".";
    }
    for(int i=0; i<height_; ++i){
      board.push_back(str);
    }
  }
  int put(int x,int y);
  void IsOmok(int* winner) const;
  int Turn() const{
    return turn_;
  };
  vector<string> board;
 private:
  size_t width_,height_;
  size_t turn_;
};
ostream& operator<<(ostream& os, const Omok& omok);
