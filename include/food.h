#pragma once
#include<deque>
#include<raylib.h>

class Food {
private:
  int posX;
  int posY;
public:
  Food();
  void setRandomLocation( std::deque<Rectangle> tail );
  int getLocationX();
  int getLocationY();
  void draw();
};
