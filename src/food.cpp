#include<raylib.h>
#include<deque>
#include<random>
#include"../include/constants.h"
#include"../include/food.h"

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> randi_width(0, WINDOW_WIDTH / TILE_SIZE );
std::uniform_int_distribution<> randi_height(0, WINDOW_HEIGHT / TILE_SIZE );

Food::Food() {
  setRandomLocation( SNAKE_START_DEQUE );  
}

void Food::setRandomLocation( std::deque<Rectangle> tail) {
    bool valid = false;
    while (!valid) {
        posX = randi_width(gen) * TILE_SIZE;
        posY = randi_height(gen) * TILE_SIZE;

        valid = true;
        for ( auto& segment : tail) {
            if (segment.x == posX && segment.y == posY) {
                valid = false;
                break;
            }
        }
    }
}

int Food::getLocationX() {
  return posX;
}

int Food::getLocationY() {
  return posY;
}

void Food::draw() {
  Rectangle rec = { (float)posX, (float)posY, TILE_SIZE, TILE_SIZE };
  DrawRectangleRec(rec, FOOD_COLOR);
}
