#include<raylib.h>
#include"../include/window.h"
#include"../include/constants.h"

Window::Window() {
    InitWindow( WINDOW_WIDTH, WINDOW_HEIGHT, TITLE );
    SetTargetFPS( FPS );
}

void Window::refresh() {
    ClearBackground( BACKGROUND_COLOR );
}

void Window::close() {
    CloseWindow();
}

bool Window::running() {
    return !WindowShouldClose();
}

void Window::showStartMessage() {
    int textWidth = MeasureText( START_MESSAGE, FONT_SIZE );
    int posX = WINDOW_WIDTH / 2 - textWidth / 2;
    int posY = WINDOW_HEIGHT / 2 - FONT_SIZE / 2;
    DrawText( START_MESSAGE, posX, posY, FONT_SIZE, TEXT_COLOR );
}
