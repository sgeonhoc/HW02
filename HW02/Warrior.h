#pragma once
#include "Player.h"

class Warrior : public Player {
public:


    Warrior() : Player(200, 50) {}

    void attack() override;

};