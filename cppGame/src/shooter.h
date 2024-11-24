// This class performs the underlying logic for any projectile weapon/skill in the game

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
    Shooter(int bulletSpeed, int bulletRadius);
    void SpawnBullet(float x, float y, float speedX, float speedY);
    void Update();
    void Draw();
private:
    //Shooter attributes
    Bullet bullet[MAX_BULLETS];
    int bulletCount = 0;

    //Bullet attributes
    int bulletSpeed;
    int bulletRadius;
    
    void RemoveBullet(int n);
    void CheckActive();
};