#include "board.h"

Board::Board(int noOfRows, int noOfCols, char X, char O, char blank) {
    NO_OF_ROWS = noOfRows;
    NO_OF_COLUMNS = noOfCols;
    this->X = X;
    this->O = O;
    this->BLANK = blank;
    for (int i = 0; i < NO_OF_ROWS; i++) {
        for (int j = 0; j < NO_OF_COLUMNS; j++) {
            board[i][j] = BLANK;
        }
    }
}

Board::~Board() { delete board; }

int Board::getNO_OF_ROWS() const {
    return NO_OF_ROWS;
}

int Board::getNO_OF_COLUMNS() const {
    return NO_OF_COLUMNS;
}

char Board::getX() const {
    return X;
}

char Board::getO() const {
    return X;
}





