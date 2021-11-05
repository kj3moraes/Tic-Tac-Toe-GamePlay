#ifndef HUMAN_H
#define HUMAN_H

class Human final: public Player {
    const int DIFFICULTY_IDENTIFIER = 4;

    int* acceptCoordinates();

    public:
        Human();
        ~Human();

        int makeAMove(Board *game) override;
};

#endif