#pragma once
#include "Player.h"

class Magician : public Player {
public:


    Magician() : Player(100, 80) {}



    void attack() override;

};