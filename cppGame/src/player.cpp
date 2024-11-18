#include "player.h"
#include <raylib.h>
#include <cmath>

Player::Player()
{
    this->x = 100;
    this->y = 100;
    this->speedX = 0;
    this->prevSpeedX = 1;
    this->prevSpeedX = 1;
    this->speedY = 0;
    this->radius = 15;
    this->accelHorz = 0;
    this->accelVert = 0;
    gun = new Shooter(15);
}

void Player::Update()
{
    //TODO: always ends in 45 degree angle
    if (!(speedX == 0 && speedY == 0)) {
        prevSpeedX = speedX;
        prevSpeedY = speedY;
    }

    if (IsKeyDown(KEY_UP) || IsKeyDown(KEY_DOWN))
    {
        if (IsKeyDown(KEY_UP) && speedY > -8)
            speedY -= .4;
        if (IsKeyDown(KEY_DOWN) && speedY < 8)
            speedY += .4;
    }
    else
    {
        if (speedY > 0)
            speedY -= .2;
        if (speedY < 0)
            speedY += .2;
        if (abs(speedY) < 0.02)
            speedY = 0;
    }

    if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_RIGHT))
    {
        if (IsKeyDown(KEY_LEFT) && speedX > -8)
            speedX -= .4;
        if (IsKeyDown(KEY_RIGHT) && speedX < 8)
            speedX += .4;
    }
    else
    {
        if (speedX > 0)
            speedX -= .2;
        if (speedX < 0)
            speedX += .2;
        if (abs(speedX) < 0.02)
            speedX = 0;
    }

    if (x + radius >= GetScreenWidth() || x - radius <= 0)
    {
        speedX = -speedX / 2;
        if (abs(speedX) < 2)
            speedX = 0;
        if (x + radius >= GetScreenWidth())
            x -= 2;
        else if (x - radius <= 0)
            x += 2;
    }
    

    if (y + radius >= GetScreenHeight() || y - radius <= 0)
    {
        speedY = -speedY / 2;
        if (abs(speedY) < 2)
            speedY = 0;
        if (y + radius >= GetScreenHeight())
            y -= 2;
        else if (y - radius <= 0)
            y += 2;
    }

    x += speedX;
    y += speedY;

    if (x + radius >= GetScreenWidth())
        x -= 2;
    else if (x - radius <= 0)
        x += 2;
    if (y + radius >= GetScreenHeight())
        y -= 2;
    else if (y - radius <= 0)
        y += 2;

    if (IsKeyPressed(KEY_A)) {
        float passedSpeedX;
        float passedSpeedY;
        if (speedX == 0 && speedY == 0) {
            passedSpeedX = prevSpeedX;
            passedSpeedY = prevSpeedY;
        } else {
            passedSpeedX = speedX;
            passedSpeedY = speedY;
        }
        gun->SpawnBullet(x, y, passedSpeedX, passedSpeedY, 3);
        
    }
    gun->Update();
}

void Player::Draw()
{
    DrawCircle(x, y, radius, WHITE);
    gun->Draw();
}