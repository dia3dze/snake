#pragma once
#include<raylib.h>
#include<deque>

// window
constexpr char TITLE[] = "Snake";
constexpr int WINDOW_WIDTH = 640;
constexpr int WINDOW_HEIGHT = 360;
constexpr int FPS = 2;

// colors
inline const Color BACKGROUND_COLOR = Color{ 40, 40, 40, 255 };
inline const Color SNAKE_COLOR = Color{ 254, 128, 25, 255 };
inline const Color FOOD_COLOR = Color{ 251, 73, 52, 255 };
// tiles
constexpr int TILE_SIZE = 8;
constexpr int COUNT_TILE_HORIZONTAL = WINDOW_WIDTH / TILE_SIZE;
constexpr int COUNT_TILE_VERTICAL = WINDOW_HEIGHT / TILE_SIZE;

// snake
inline std::deque<Rectangle> SNAKE_START_DEQUE = {
    Rectangle{1 * TILE_SIZE, 5 * TILE_SIZE, TILE_SIZE, TILE_SIZE},
    Rectangle{2 * TILE_SIZE, 5 * TILE_SIZE, TILE_SIZE, TILE_SIZE},
    Rectangle{3 * TILE_SIZE, 5 * TILE_SIZE, TILE_SIZE, TILE_SIZE},
    Rectangle{4 * TILE_SIZE, 5 * TILE_SIZE, TILE_SIZE, TILE_SIZE},
    Rectangle{5 * TILE_SIZE, 5 * TILE_SIZE, TILE_SIZE, TILE_SIZE}
};
constexpr int SNAKE_START_SIZE = 5;
constexpr int SNAKE_TILE_START_POS_X = 5;
constexpr int SNAKE_TILE_START_POS_Y = 5;
