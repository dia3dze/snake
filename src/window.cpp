#include<raylib.h>
#include"../include/window.h"
#include"../include/constants.h"

Window::Window() {
    InitWindow( WINDOW_WIDTH, WINDOW_HEIGHT, TITLE );
    SetTargetFPS( FPS );
}

void Window::refresh() {
    BeginDrawing();
    ClearBackground( BACKGROUND_COLOR );
    EndDrawing();
}

void Window::close() {
    CloseWindow();
}

bool Window::running() {
    return !WindowShouldClose();
}
