#include "human.h"

Human::Human(char splayerType) {
    playerType = splayerType;
}

Human::~Human() {}

int Human::makeAMove(Board *game) {
    bool isMoveValid;
    int row, col;
    do {
        isMoveValid = acceptCoordinates(row, col);
        if (!isMoveValid) {
            std::cout << "Your input is invalid. Refer to the Gameplay Instructions file for the inputting format";
        }
    } while(!isMoveValid);
}

bool Human::acceptCoordinates(int &row, int &col) {
    std::cin >> row;
    std::cin >> col;
    return !(std::cin.fail());
}
