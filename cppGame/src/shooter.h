#pragma once
#include "global_functions.h"

struct Bullet
{
    float x, y;
    float speedX, speedY;
    int radius;
};

class Shooter
{
public:
    Shooter(int bulletSpeed);
    void SpawnBullet(float x, float y, float speedX, float speedY, int radius);
    void Update();
    void Draw();
    void RemoveBullet(int n);
    void CheckActive();
private:
    Bullet bullet[MAX_BULLETS];
    int bulletCount = 0;
    int bulletSpeed;
};