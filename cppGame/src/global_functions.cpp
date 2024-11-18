#include <cmath>
#include "global_functions.h"

void getUnitVelocity(float &speedX, float &speedY)
{
    float magnitude = sqrt(speedX * speedX + speedY * speedY);
    speedX /= magnitude;
    speedY /= magnitude;
}