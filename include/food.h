#pragma once

class Food {
private:
  int posX;
  int posY;
public:
  Food();
  void setRandomLocation();
  int getLocationX();
  int getLocationY();
  void draw();
};
