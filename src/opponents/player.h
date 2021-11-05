#ifndef PLAYER_H
#define PLAYER_H
#include "board.h"
class Player {
    protected:
    public:
        char playerType;
        virtual int makeAMove(Board *game) = 0;
};
#endif