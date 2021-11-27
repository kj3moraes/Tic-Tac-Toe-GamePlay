/**
 * @file engine.cc
 * @author Keane Moraes (keanejonathan3@gmail.com)
 * @brief The implementation of the some general functions for engines
 * defined in the engine.h header file.
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
#include <iostream>

/**
 * @brief Generated a random 2-int array representing row and column
 * with min value 1 and max value 3
 * @return int* - the random array
 */
int* Engine::generateRandomPosition() {
    // std::default_random_engine generator;
    // std::uniform_int_distribution<int> dist(1, 4);
        
    
    std::random_device rd;     // only used once to initialise (seed) engine
    std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
    std::uniform_int_distribution<int> uni(1, 4); // guaranteed unbiased

    int *randomCoords = new int[2];
    randomCoords[0] = uni(rng);
    randomCoords[1] = uni(rng);
    return randomCoords;
}

/**
 * @brief 
 * 
 */
void Engine::placePieceRandomly(Board *&game) {
    int *randomCoords = generateRandomPosition();
    if (game->isTileMarked(randomCoords[0], randomCoords[1])) {
        randomCoords = generateRandomPosition();
    }
    game->placePiece(randomCoords[0], randomCoords[1], this->playerType);
    delete[] randomCoords;
}