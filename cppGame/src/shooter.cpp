#include "shooter.h"
#include "global_functions.h"
#include <raylib.h>
#include <cmath>

Shooter::Shooter(int bulletSpeed, int bulletRadius)
{
    this->bulletSpeed = bulletSpeed;
    this->bulletRadius = bulletRadius;
}

void Shooter::SpawnBullet(float x, float y, float speedX, float speedY)
{
    if (bulletCount == MAX_BULLETS) {
        CheckActive();
    }
    if (bulletCount == MAX_BULLETS) {
        RemoveBullet(0);
    }
    getUnitVelocity(speedX, speedY);
    bullet[bulletCount].x = x;
    bullet[bulletCount].y = y;
    bullet[bulletCount].speedX = bulletSpeed * speedX;
    bullet[bulletCount].speedY = bulletSpeed * speedY;
    bullet[bulletCount].radius = bulletRadius;
    ++bulletCount;
}

void Shooter::Update()
{
    int i = 0;
    while (i < bulletCount) {
        bullet[i].x += bullet[i].speedX;
        bullet[i].y += bullet[i].speedY;
        ++i;
    }
}

void Shooter::Draw()
{
    int i = 0;
    while (i < bulletCount) {
        DrawCircle(bullet[i].x, bullet[i].y, bullet[i].radius, RED);
        ++i;
    }
}

void Shooter::CheckActive()
{
    int i = 0;
    while (i < bulletCount) {
        // Check if bullet out of bounds. Replace with last bullet in list if so
        if (bullet[i].x < 0 || bullet[i].y < 0 || bullet[i].x > GetScreenWidth() || bullet[i].y > GetScreenHeight()) {
            RemoveBullet(i);
        } else {
            // Check the next bullet if active
            ++i;
        }
    }
}

void Shooter::RemoveBullet(int n)
{
    bullet[n] = bullet[--bulletCount];
}


