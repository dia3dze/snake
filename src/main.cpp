#include<raylib.h>
#include<deque>
#include<iostream>
#include"../include/window.h"
#include"../include/snake.h"
#include"../include/input.h"
#include"../include/food.h"

void runState();
void idleState();

Window win;
Snake snake;
Input input;
Food food;

int score = 0;
bool game_state_run = false;
std::string direction = "";

int main() {
  while( win.running() ) {
    direction = input.getCurrentAction();
    if( direction != "" ) {
      snake.changeDirection(direction);
      game_state_run = true;
    }
    if( game_state_run ) {
      runState();
    }else {
      idleState();
    }
  }
  win.close();
}

void runState() {
  snake.move();
  std::deque<Rectangle> tail = snake.getTail();
  bool foodReachable = snake.isFoodReachable( food.getLocationX(), food.getLocationY() );
  if( foodReachable ) {
    food.setRandomLocation( tail );
    score++;
    snake.eatFood();
  }
  snake.checkBoundries();
  if( snake.isDead() ) {
    score = 0;
    snake.reset();
    game_state_run = false;
    direction = "";
  }
  BeginDrawing();
  win.refresh();
  win.displayScore( score );
  snake.draw();
  food.draw();
  EndDrawing();
}

void idleState() {
  BeginDrawing();
  win.refresh();
  snake.draw();
  food.draw();
  win.showStartMessage();
  EndDrawing();
}
