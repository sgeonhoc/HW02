#pragma once
#include "Player.h"

class Archer : public Player {
public:

    Archer() : Player(120, 60) {}

    void attack() override;
};