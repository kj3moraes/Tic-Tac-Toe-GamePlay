/**
 * @file hard.h
 * @author Keane Moraes (keanejonathan3@gmail.com)
 * @brief 
 *
    Copyright (C) 2021 Keane Moraes

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
 * 
 */
#include "engine.h"
#include "../../services/board.h"
#ifndef HARD_H
#define HARD_H
class Board;

class Hard final : public Engine {
    static const int NEGATIVE_SCORE =  -10;
    static const int POSITIVE_SCORE = 10;
    static const int NEUTRAL_SCORE = 0;
    static const int MAX_DEPTH = 6;

    int miniMax(Board *game, int depth, bool isMax);
    int evaluateBoard(Board *game);
    
    public:
        Hard(char playerType);
        ~Hard();


        void makeAMove(Board *game) override;
};

#endif