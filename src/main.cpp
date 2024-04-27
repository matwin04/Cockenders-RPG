#include "raylib.h"
#include <iostream>



int main(void) {
    const int screenW = 800;
    const int screenH = 450;
    InitWindow(screenW,screenH,"TapeMaster 1");
    InitAudioDevice();
    Vector2 ballPosition = { (float)screenW/2,(float)screenH/2};
    SetTargetFPS(60);
    Texture2D texture = LoadTexture("./assets/idk.png");

    while (!WindowShouldClose())
    {
        if (IsKeyDown(KEY_RIGHT)) ballPosition.x += 2.0f;
        if (IsKeyDown(KEY_LEFT)) ballPosition.x -= 2.0f;
        if (IsKeyDown(KEY_UP)) ballPosition.y -= 2.0f;
        if (IsKeyDown(KEY_DOWN)) ballPosition.y += 2.0f;
        if (IsKeyDown(KEY_A)) {
            BeginDrawing();
                ClearBackground(BLUE);
                DrawText("Congrats you beat the game by entering the secret menu",200,200,20,WHITE);
            EndDrawing();
        } else {
        BeginDrawing();
            ClearBackground(BLACK);
            DrawText("Frostie Studios",190,200,20,RED);
            DrawText("PRESENTS",400,200,20,LIGHTGRAY);
            
            DrawRectangle(200,400,150,20,RED);
            DrawText("L O A D I N G", 200,400,20,LIGHTGRAY);

        EndDrawing();
        }
    }
    UnloadTexture(texture);
    CloseWindow();
    return 0;
  
}
