/**
 * @file board.h
 * @author Keane Moraes
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
#ifndef BOARD_H
#define BOARD_H

class Board {
    char X;
    char O;
    char BLANK;
    int NO_OF_ROWS;
    int NO_OF_COLUMNS;
    char board[3][3];

    public:
        Board(int noRows = 3, int noCols = 3, char x = 'X', char o = 'O', char blank = ' ');

        template <size_t rows, size_t cols>
        Board(char configuration[rows][cols]);
        ~Board();

        int getNO_OF_ROWS();
        int getNO_OF_COLUMNS();

        bool isTileMarked(int row, int col);
        char getPiece(int row, int col);
        bool isBoardFull();
        bool placePiece(int row, int col, char playerType);
        void removePiece(int row, int col);
        void displayBoard();
        
};
#endif