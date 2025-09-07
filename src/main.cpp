#include <raylib.h>
#include "../include/window.h"
#include "../include/snake.h"
#include "../include/input.h"
#include "../include/food.h"

int main() {
    Window win;
    Snake snake;
    Input input;
    Food food;

    int score = 0;
    bool game_state_run = false;
    std::string direction;

    auto drawScene = [&](bool running) {
        BeginDrawing();
        win.refresh();
        snake.draw();
        food.draw();
        if (running) win.displayScore(score);
        else win.showStartMessage();
        EndDrawing();
    };

    while (win.running()) {
        direction = input.getCurrentAction();

        if (!direction.empty()) {
            snake.changeDirection(direction);
            game_state_run = true;
        }

        if (game_state_run) {
            snake.move();
            if (snake.isFoodReachable(food.getLocationX(), food.getLocationY())) {
                food.setRandomLocation(snake.getTail());
                score++;
                snake.eatFood();
            }
            snake.checkBoundries();

            if (snake.isDead()) {
                score = 0;
                snake.reset();
                game_state_run = false;
                direction.clear();
            }
        }

        drawScene(game_state_run);
    }

    win.close();
}
