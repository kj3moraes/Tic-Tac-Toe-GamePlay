#ifndef HUMAN_H
#define HUMAN_H

class Human final: public Player {
    public:
        int makeAMove() override;
};

#endif