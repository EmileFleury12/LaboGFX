#include "entrypoint.h"
#include "raylib.h"

//1
void raylib_start(void){
    InitWindow(800,600,"Frame mogged");
    float w = GetMonitorWidth(0) * 0.8f;
    float h = GetMonitorHeight(0) * 0.8f;
    SetWindowSize(w,h);

    float x = 400;
    float y = 300;
    while(!WindowShouldClose()){
        if(IsKeyDown(KEY_ESCAPE)){
            break;
        }
        BeginDrawing();
        ClearBackground(BLACK);
        DrawRectangle(x,y,300,300,BROWN);
        DrawTriangle(
            {400,100},
            {300,300},
            {500,300},
            WHITE
        );
        DrawCircle(200,100,100,ORANGE);
        EndDrawing();
    }
    CloseWindow();
    return;
    }

//2
/*void raylib_start(void){
    InitWindow(800,600,"Frame mogged");
    float w = GetMonitorWidth(0) * 0.9f;
    float h = GetMonitorHeight(0) * 0.6f;
    SetWindowSize(w,h);

    float x = 0.0f;
    float y = 0.0f;
    while(!WindowShouldClose()){
        if(IsKeyDown(KEY_ESCAPE)){
            break;
        }
        if(IsKeyDown(KEY_D)){
            x+= 0.1f;
        }
        if(IsKeyDown(KEY_A)){
            x-= 0.1f;
        }
        if(IsKeyDown(KEY_W)){
            y-= 0.1f;
        }
        if(IsKeyDown(KEY_S)){
            y+= 0.1f;
        }
        BeginDrawing();
        ClearBackground(BLACK);
        DrawRectangle(x,y,100,100,RED);
        EndDrawing();
    }
    CloseWindow();
    return;
    }*/