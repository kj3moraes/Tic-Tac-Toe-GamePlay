#ifndef PLAYER_H
#define PLAYER_H

class Player {
    protected:
        const static char X = 'X';
        const static char O = 'O';

    public:
        virtual int makeAMove() = 0;
};
#endif