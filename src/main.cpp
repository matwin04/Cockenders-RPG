#include "raylib.h"
#include "rcamera.h"
#include <iostream>
#include "LDtkLoader/World.hpp"



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
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawTexture(texture,screenW/2-texture.width/2,screenH/2-texture.height, WHITE);

            DrawText("Frostie Studios Presents",190,200,20,RED);
            DrawCircleV(ballPosition, 50, MAROON);
        EndDrawing();
    }
    UnloadTexture(texture);
    CloseWindow();
    return 0;
  
}
