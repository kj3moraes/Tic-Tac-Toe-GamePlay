/**
 * @file board.h
 * @author Keane Moraes
 * @brief Header file for the Board class.
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
#include <iostream>
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

        void setX(char X);
        void setO(char O);
        void setBLANK(char BLANK);

        int getNO_OF_ROWS() const;
        int getNO_OF_COLUMNS() const;
        char getX() const;
        char getO() const;

        /**
         * @brief Resets the board by
         * setting everything to BLANK.
         */
        void resetBoard();

        /**
         * @brief Determines if the specified row and column
         * have a piece present
         * @param row row number
         * @param col column number
         * @return true - a piece is present
         * @return false - no piece is present
         */
        bool isTileMarked(int row, int col);

        /**
         * @brief Get the piece present at the specified
         * row and column. Can be a BLANK.
         * @param row row number
         * @param col column number
         * @return char - one of X, O, BLANK
         */
        char getPiece(int row, int col) const;

        /**
         * @brief Determines if the board is full
         * (i.e all the positions have a non-BLANK)
         * @return true 
         * @return false 
         */
        bool isBoardFull() const;

        /**
         * @brief 
         * 
         * @param row 
         * @param col 
         * @param playerType 
         * @return true 
         * @return false 
         */
        bool placePiece(int row, int col, char piece);

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