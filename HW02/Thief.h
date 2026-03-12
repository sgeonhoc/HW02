#pragma once
#include "Player.h"

class Thief : public Player {
public:

    Thief() : Player(110, 70) {}

    void attack() override;
};