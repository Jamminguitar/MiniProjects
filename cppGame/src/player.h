#pragma once
#include "shooter.h"
#include "list.h"

class Player
{
public:
    Player();
    void Update();
    void Draw();

private:
    float x;
    float y;
    float speedX;
    float speedY;
    float prevSpeedX;
    float prevSpeedY;
    float accelHorz;
    float accelVert;
    int radius;
    Shooter *gun;
};