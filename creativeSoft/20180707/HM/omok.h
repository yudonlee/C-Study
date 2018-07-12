#ifndef __omok__
#define __omok__

#include <iostream>

#define BLACK -1
#define NOBODY 0
#define WHITE 1
#define GROUND_SIZE 19

class Omok {
public:
  Omok();
  int Put(int x, int y);
  void IsOmok(int* winner);
  void Draw();
  int Turn() const { return turn_; }
 private:
  int width_, height_;
  int turn_;
  int GetValue(int x, int y);
  int board_[GROUND_SIZE][GROUND_SIZE];
};

#endif
