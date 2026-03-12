#pragma once
#include <iostream>

class Player {
protected:
    int hp;
    int power;

public:
    Player(int h, int p);
    virtual ~Player();
    virtual void attack() = 0;

    int getHP();
    void setHP(int v);

    int getPower();
    void setPower(int v);

    void printPlayerStatus();
};