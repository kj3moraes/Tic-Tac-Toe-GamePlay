/**
 * @file result.h
 * @author your name (you@domain.com)
 * @brief The header file for the Board object to manage all things
 * that occur on the TTT Board.
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
#ifndef RESULT_H
#define RESULT_H
#include "board.h"
#include "../opponents/player.h"
#include <iostream>
class Player;
class Board;
class Result final {
    public:
        /**
         * @brief 
         * 
         * @param game 
         * @param piece 
         * @return true 
         * @return false 
         */
        static bool isWinner(const Board *game, char piece);
};
#endif