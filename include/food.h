#pragma once

class Food {
private:
  int posX;
  int posY;
public:
  Food();
  void getRandomLocation();
  void draw();
};
