#include "player.h"

Player::Player(char playerType) {
    this->playerType = playerType;
}

Player::~Player() {}

char Player::getPlayerType() const {
    return playerType;
}