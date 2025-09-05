#pragma once
#include<raylib.h>
#include<deque>
#include"../include/constants.h"

class Snake {
private:
  int size = SNAKE_START_SIZE;
  std::deque<Rectangle> tail = SNAKE_START_DEQUE;
public:
  Snake();
  void draw();
};
