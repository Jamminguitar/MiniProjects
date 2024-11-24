// This class is what the player and enemy classes will see when using any skill in the game.

#include "shooter.h"

class EmptyAttack : public Shooter
{
    public:
    EmptyAttack() : Shooter(0, 0) {}
};

class BasicAttack : public Shooter
{
    public:
    BasicAttack() : Shooter(15, 5) {}
};