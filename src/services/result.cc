#include "result.h"

bool Result::isWinner(const Board *game, char piece) {
    // ROW WINS?
    for (int i = 1; i <= 3; i++) {
        if (game->getPiece(i, 1) == piece && game->getPiece(i, 2) == piece
                && game->getPiece(i, 3) == piece)
            return true;
    }

    // COLUMN WINS?
    for (int i = 1; i <= 3; i++) {
        if (game->getPiece(1, i) == piece && game->getPiece(2, i) == piece
                && game->getPiece(3, i) == piece)
            return true;
    }

    // DIAGONAL WINS?
    if (game->getPiece(1, 1) == piece && game->getPiece(2, 2) == piece
            && game->getPiece(3 ,3) == piece) {
        return true;
    } else {
        return game->getPiece(1, 3) == piece && game->getPiece(2, 2) == piece
                && game->getPiece(3, 1) == piece;
    }
}
