/**
 * @file engine.h
 * @author Keane Moraes (keanejonathan3@gmail.com)
 * @brief Defines behaviour for the Engines and provides useful functions.
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
#ifndef ENGINE_H
#define ENGINE_H
#include <random>
#include <string>
#include "../player.h"
#include "../../services/board.h"
class Board;

class Engine: public Player {
    int* generateRandomPosition();
    
    protected:
        std::string ENGINE_NAME;
        void placePieceRandomly(Board *&game);    
};
#endif