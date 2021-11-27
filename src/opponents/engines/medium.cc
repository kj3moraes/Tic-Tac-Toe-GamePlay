/**
 * @file medium.cc
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
#include "medium.h"

Medium::Medium(char playerType) {
    this->playerType = playerType;
}

Medium::~Medium() {}

int *Medium::findWinningMove(Board *game, char playerType) {
    for (int i = 1; i <= game->getNO_OF_ROWS(); i++) {
        for (int j = 1; j <= game->getNO_OF_COLUMNS(); j++) {
            if (!game->isTileMarked(i, j)) {
                game->placePiece(i, j, playerType);
                if (Result::isWinner(game, playerType)) {
                    game->removePiece(i, j);
                    return new int[2]{i, j};
                }
                game->removePiece(i, j);
            }
        }
    }
    return nullptr;
}

void Medium::makeAMove(Board *&game) {
    std::cout << "\nThe Medium engine is making its move..." << std::endl;

    int *winningCoords = nullptr;

    // STEP 1: CHECK TO SEE IF I HAVE A WINNING MOVE
    winningCoords = findWinningMove(game, this->playerType);
    if (winningCoords != nullptr) {
        game->placePiece(winningCoords[0], winningCoords[1], this->playerType);
        game->displayBoard();
        delete [] winningCoords;
        return ;
    }
    delete[] winningCoords;

    // STEP 2: CHECK TO SEE IF THE OPPONENT HAS A WINNING MOVE
    winningCoords = nullptr;
    if (this->playerType == game->getX()) {
        winningCoords = findWinningMove(game, game->getO());
    } else {
        winningCoords = findWinningMove(game, game->getX());
    }

    if (winningCoords != nullptr) {
        game->placePiece(winningCoords[0], winningCoords[1], this->playerType);
        game->displayBoard();
        delete[] winningCoords;
        return ;
    }
    delete[] winningCoords;

    // STEP 3: IF NONE, PLAY RANDOMLY
    placePieceRandomly(game);
    game->displayBoard();
}