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

Board::~Board() { }

void Board::setX(char X) {
    this->X = X;
}

void Board::setO(char O) {
    this->O = O;
}

void Board::setBLANK(char BLANK) {
    this->BLANK = BLANK;
}

void Board::resetBoard() {
    for (int i = 0; i < NO_OF_ROWS; i++) {
        for (int j = 0; j < NO_OF_COLUMNS; j++) {
            board[i][j] = BLANK;
        }
    }
}

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
    return O;
}

bool Board::isTileMarked(int row, int col) {
    return (board[row - 1][col - 1] != BLANK);
}

char Board::getPiece(int row, int col) const {
    return board[row - 1][col - 1];
}

bool Board::isBoardFull() const {
    for (int i = 0; i < NO_OF_ROWS; i++) {
        for (int j = 0; j < NO_OF_COLUMNS; j++) {
            if (board[i][j] == BLANK) {
                return false;
            }
        }
    }
    return true;
}

bool Board::placePiece(int row, int column, char piece) {
    if (board[row - 1][column - 1] != BLANK) {
        return false;
    }
    board[row - 1][column - 1] = piece;
    return true;
}

void Board::removePiece(int row, int col) {
    board[row - 1][col - 1] = BLANK;
}

void printHeader(int length) {
    std::cout << "+";
    for (int i = 0; i < length; i++) {
        std::cout << "-"; 
    }   
    std::cout << "+" << std::endl;
}

void Board::displayBoard() const {
    printHeader(NO_OF_ROWS);
    for (int i = 0; i < NO_OF_ROWS; i++) {
        std::cout << "|";
        for (int j =0; j < NO_OF_COLUMNS; j++) {
            std::cout << getPiece(i + 1, j + 1);
        }
        std::cout << "|" << std::endl;
    }
    printHeader(NO_OF_ROWS);
}