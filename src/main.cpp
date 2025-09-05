#include<raylib.h>
#include"../include/window.h"
#include"../include/snake.h"

void runState();
void idleState();

Window win;
Snake snake;

int main() {
  bool game_state_run = false;
  while( win.running() ) {
    if( game_state_run ) {
      runState();
    }else {
      idleState();
    }
  }
  win.close();
}

void runState() {
  BeginDrawing();
  win.refresh();
  snake.draw();
  EndDrawing();
}

void idleState() {
  BeginDrawing();
  win.refresh();
  snake.draw();
  win.showStartMessage();
  EndDrawing();
}
