#ifndef HUMAN_H
#define HUMAN_H
#include "player.h"
#include "../services/board.h"
#include "../prettyprint.h"
#include <string>
#include <sstream>
#include <iostream>
class Board;
class Human: public Player {

    /**
     * @brief 
     * 
     * @param row 
     * @param col 
     * @return true 
     * @return false 
     */
    bool acceptCoordinates(int &row, int &col);
    
    public:
        Human(char playerType = 'H');
        ~Human();

        void makeAMove(Board *&game) override;
};

#endif