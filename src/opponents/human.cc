/**
 * @file easy.h
 * @author Keane Moraes (keanejonathan3@gmail.com)
 * @brief The main program that allows the user to interact with 
 * the program and play the game.
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
#include "human.h"

Human::Human(char splayerType) {
    playerType = splayerType;
}

Human::~Human() {}

void Human::makeAMove(Board *&game) {
    bool isInputValid;
    int row, col;
    std::string input;
    do {
        std::cout << "\nEnter the row and the column numbers to place your piece (" << getPlayerType() <<  ") : ";
        getline(std::cin, input);

        if (input == "exit") {
            exit;
        }
        // std::cout << "The input is : " << input << std::endl;
        std::istringstream is{input};
        is >> row;
        // std::cout << "The row is : " << row << std::endl;
        is >> col;
        // std::cout << "The column  is : " << col << std::endl;
        isInputValid = ((row >= 1 && row <= game->getNO_OF_ROWS()) && (col >= 1 && col <= game->getNO_OF_COLUMNS()));

        if (!isInputValid) {
            std::cout << red << "\nYour input is invalid. Refer to the Gameplay Instructions file for the inputting format" << reset << std::endl;
        }

        if (game->isTileMarked(row, col)) {
            std::cout << red << "\nThere already is a piece at this position. Select another" << reset << std::endl;

        }
    } while(!isInputValid);
    game->placePiece(row, col, this->playerType);
}

bool Human::acceptCoordinates(int &row, int &col) {
    std::cout << "\nEnter the row coordinates >> ";
    std::cin >> row;
    std::cout << "Enter the column coordinates >> ";
    std::cin >> col;
    return (!std::cin.fail());
}
