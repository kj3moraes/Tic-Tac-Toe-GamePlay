/**
 * @file hard.cc
 * @author Keane Moraes (keanejonathan3@gmail.com)
 * @brief Implementation for the Hard engine
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
#include "hard.h"

Hard::Hard(char playerType) {
    this->playerType = playerType;
}

Hard::~Hard() {}


int Hard::evaluateBoard(Board *game) {
    bool isXWin = Result::isWinner(game, game->getX());
    bool isOWin = Result::isWinner(game, game->getO());

    if (this->playerType == game->getX()) {
        if (isXWin && !isOWin) {
            return POSITIVE_SCORE;
        } else if (isOWin && !isXWin) {
            return NEGATIVE_SCORE;
        } else {
            return NEUTRAL_SCORE;
        }
    } else {
        if (isXWin && !isOWin) {
            return  NEGATIVE_SCORE;
        } else if (isOWin && !isXWin) {
            return POSITIVE_SCORE;
        }
    }
    return NEUTRAL_SCORE;
}


int Hard::miniMax(Board *game, int depth, bool isMax) {
    int currentBoardValue = evaluateBoard(game);

    if (abs(currentBoardValue) == POSITIVE_SCORE || depth == 0 || game->isBoardFull()) {
        return currentBoardValue;
    }

    if (isMax) {
        int highestVal = INT32_MIN;
        for (int row = 1; row <= game->getNO_OF_ROWS(); row++) {
            for (int col = 1; col <= game->getNO_OF_COLUMNS(); col++) {
                if (!game->isTileMarked(row, col)) {
                    game->placePiece(row, col, this->getPlayerType());
                    highestVal = fmax(highestVal, miniMax(game, depth-1, false));
                    game->removePiece(row, col);
                }
            }
        }
        return highestVal;
    } else {
            char opponentPlayerType = this->playerType == game->getX() ? game->getO() : game->getX();
            int lowestVal = INT32_MAX;
            for (int row = 1; row <= game->getNO_OF_ROWS(); row++) {
                for (int col = 1; col <= game->getNO_OF_COLUMNS(); col++) {
                    if (!game->isTileMarked(row, col)) {
                        game->placePiece(row, col, opponentPlayerType);
                        lowestVal = fmin(lowestVal, miniMax(game, depth-1, true));
                        game->removePiece(row, col);
                    }
                }
            }
            return lowestVal;
        }
}


void Hard::makeAMove(Board *game) {
    std::cout << "\nThe Hard engine is making its move..." << std::endl;
    int bestMove[]{0,0};
    int bestMoveValue = INT32_MAX;

    for (int i = 1; i <= game->getNO_OF_ROWS(); i++) {
        for (int j = 1; j <= game->getNO_OF_COLUMNS(); j++) {
            if (!game->isTileMarked(i, j)) {
                game->placePiece(i, j, this->playerType);
                int moveValue = miniMax(game, MAX_DEPTH, false);
                game->removePiece(i, j);
                if (moveValue > bestMoveValue) {
                    bestMove[0] = i;
                    bestMove[1] = j;
                    bestMoveValue = moveValue;
                }
            }
        }
    }

    game->placePiece(bestMove[0], bestMove[1], this->playerType);
    game->displayBoard();
}