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
#ifndef BOARDGAME_H
#define BOARDGAME_H

class Board {
    char X;
    char O;
    char BLANK;
    int NO_OF_ROWS;
    int NO_OF_COLUMNS;
    char board[3][3];

    public:
        Board(int noRows = 3, int noCols = 3, char x = 'X', char o = 'O', char blank = ' ');
        ~Board();

        int getNO_OF_ROWS() const;
        int getNO_OF_COLUMNS() const;
        char getX() const;
        char getO() const;

        /**
         * @brief 
         * 
         * @param row 
         * @param col 
         * @return true 
         * @return false 
         */
        bool isTileMarked(int row, int col);

        /**
         * @brief Get the Piece object
         * 
         * @param row 
         * @param col 
         * @return char 
         */
        char getPiece(int row, int col) const;

        /**
         * @brief 
         * 
         * @return true 
         * @return false 
         */
        bool isBoardFul() const;

        /**
         * @brief 
         * 
         * @param row 
         * @param col 
         * @param playerType 
         * @return true 
         * @return false 
         */
        bool placePiece(int row, int col, char playerType);

        /**
         * @brief 
         * 
         * @param row 
         * @param col 
         */
        void removePiece(int row, int col);

        /**
         * @brief 
         * 
         */
        void displayBoard() const ;
};
#endif