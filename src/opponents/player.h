#ifndef PLAYER_H
#define PLAYER_H
class Board;

class Player {
    protected:
        char playerType;
        
    public:
        Player(char playerType = 'H');
        ~Player();
        virtual int makeAMove(Board *game) = 0;
};
#endif