// This is the player class that each player will use when exploring the game

#pragma once
#include "skills.h"

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
    Shooter* skills[8];
};