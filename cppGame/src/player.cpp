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
    skills[0] = new BasicAttack();
    for (int i = 1; i < 8; i++) {
        skills[i] = new EmptyAttack();
    }
}

void Player::Update()
{
    //TODO: Set a flag for when we have just collided? Trying to solve "bouncing" issue on edges

    // Ensure that if no velocity is found, we still record the previous velocity
    if (!(speedX == 0 && speedY == 0)) {
        prevSpeedX = speedX;
        prevSpeedY = speedY;
    }

    // Key up and down logic
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

    // Key left and right logic
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

    // If out of bounds, bounce off of the wall
    if (x + radius >= GetScreenWidth() || x - radius <= 0)
    {
        speedX = -speedX / 2;
        // At small enough speeds, set the speed to 0
        if (abs(speedX) < 2)
            speedX = 0;
    }
    if (y + radius >= GetScreenHeight() || y - radius <= 0)
    {
        speedY = -speedY / 2;
        // At small enough speeds, set the speed to 0
        if (abs(speedY) < 2)
            speedY = 0;
    }

    // Update positions
    x += speedX;
    y += speedY;

    // Check that we have not exited the boundaries
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
        skills[0]->SpawnBullet(x, y, passedSpeedX, passedSpeedY);
        
    }
    for (int i = 0; i < 8; i++) {
        skills[i]->Update();
    }
}

void Player::Draw()
{
    DrawCircle(x, y, radius, WHITE);
    for (int i = 0; i < 8; i++) {
        skills[i]->Draw();
    }
}