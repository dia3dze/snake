#include<raylib.h>
#include<string>
#include"../include/snake.h"
#include"../include/constants.h"

Snake::Snake() {
  
}

void Snake::draw() {
  for ( auto rec : tail ) {
    DrawRectangleRec( rec, SNAKE_COLOR );
  }
}

void Snake::changeDirection( std::string direction ) {
    if (nextDirection == "up" && direction == "down") return;
    if (nextDirection == "down" && direction == "up") return;
    if (nextDirection == "left" && direction == "right") return;
    if (nextDirection == "right" && direction == "left") return;

    nextDirection = direction;
}

void Snake::move() {
  tail.pop_back();
  Rectangle head = tail.front();
  if( nextDirection == "up" ) head.y -= TILE_SIZE;
  if( nextDirection == "down" ) head.y += TILE_SIZE;
  if( nextDirection == "left" ) head.x -= TILE_SIZE;
  if( nextDirection == "right" ) head.x += TILE_SIZE;
  tail.push_front( head );
}
