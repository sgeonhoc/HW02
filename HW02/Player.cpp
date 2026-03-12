#include "Player.h"

Player::Player(int h, int p) : hp(h), power(p) {}

Player::~Player() {}

int Player::getHP() { return hp; }
void Player::setHP(int v) { hp = v; }

int Player::getPower() { return power; }
void Player::setPower(int v) { power = v; }

void Player::printPlayerStatus() {
    std::cout << "HP: " << hp << " | ATK: " << power << std::endl;
}