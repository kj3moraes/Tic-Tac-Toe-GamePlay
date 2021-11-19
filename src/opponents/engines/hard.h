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

#ifndef HARD_H
#define HARD_H
#include <cmath>
#include "engine.h"
#include "../../services/board.h"
#include "../../services/result.h"
class Board;

class Hard final : public Engine {
    
    /**
     * @brief 
     * 
     * @param game 
     * @param depth 
     * @param isMax 
     * @return int 
     */
    int miniMax(Board *game, int depth, bool isMax);

    /**
     * @brief 
     * 
     * @param game 
     * @return int 
     */
    int evaluateBoard(Board *game);
    
    public:
        Hard(char playerType);
        ~Hard();
        
        void makeAMove(Board *game) override;
};

#endif