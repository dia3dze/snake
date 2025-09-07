#include<raylib.h>
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

int main() {
  bool game_state_run = false;
  while( win.running() ) {
    std::string direction = input.getCurrentAction();
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
  bool foodReachable = snake.isFoodReachable( food.getLocationX(), food.getLocationY() );
  if( foodReachable ) {
    food.setRandomLocation();
    score++;
    snake.eatFood();
  }
  snake.checkBoundries();
  BeginDrawing();
  win.refresh();
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
