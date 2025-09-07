#pragma once
#include<raylib.h>

class Window {
public:
  Window();
  void refresh();
  void close();
  bool running();
  void showStartMessage();
  void displayScore( int score );
};
