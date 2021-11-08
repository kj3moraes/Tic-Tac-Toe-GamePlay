#ifndef HUMAN_H
#define HUMAN_H
#include "player.h"
#include "board.h"
#include <string>
#include <iostream>
class Board;
class Human: public Player {

    bool acceptCoordinates(int &row, int &col);

    public:
        Human(char playerType = 'H');
        ~Human();

        void makeAMove(Board *game) override;
};

#endif