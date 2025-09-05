#include<raylib.h>
#include"../include/window.h"
#include"../include/snake.h"


int main() {
  Window win;
  Snake snake;
  while( win.running() ) {
    BeginDrawing();
    win.refresh();
    snake.draw();
    EndDrawing();
  }
  win.close();
}
