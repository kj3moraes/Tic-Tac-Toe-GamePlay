#include "medium.h"

Medium::Medium() {
    playerType = 'M';
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

int Medium::makeAMove(Board *game) {
    
}