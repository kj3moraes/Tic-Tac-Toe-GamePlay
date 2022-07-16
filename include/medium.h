/**
 * @file medium.h
 * @author Keane Moraes (keanejonathan3@gmail.com)
 * @brief Header file for the Medium engine.
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
#include "board.h"
#include "result.h"
#include <iostream>
#ifndef MEDIUM_H
#define MEDIUM_H
class Board;

class Medium final: public Engine {

    /**
     * @brief Finds a winning move whehter along a column,
     * row or diagonal. Returns a int pointer to the array storing
     * this winning move. Returns nullptr if none-exists
     * @param game game to determine winning move.
     * @param playerType - either an 'X' or 'O'
     * @return int* - array contaning winning move. nullptr if none exists
     */
    int* findWinningMove(Board *game, char playerType);

    public:
        Medium(char playerType = 'X');
        ~Medium();
        void makeAMove(Board *game) override;
};

#endif