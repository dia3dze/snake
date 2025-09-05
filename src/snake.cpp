#include<raylib.h>
#include"../include/snake.h"
#include"../include/constants.h"

Snake::Snake() {
  
}

void Snake::draw() {
  for ( auto rec : tail ) {
    DrawRectangleRec( rec, SNAKE_COLOR );
  }
}

