#pragma once
#include<raylib.h>
#include<deque>
#include<string>
#include"../include/constants.h"

class Snake {
private:
  int size = SNAKE_START_SIZE;
  std::deque<Rectangle> tail = SNAKE_START_DEQUE;
  std::string nextDirection = "right";
public:
  Snake();
  void draw();
  void changeDirection(std::string direction);
  void move();
  bool isFoodReachable(int foodPosX, int foodPosY);
  void eatFood();
  void checkBoundries();
  std::deque<Rectangle> getTail();
};
