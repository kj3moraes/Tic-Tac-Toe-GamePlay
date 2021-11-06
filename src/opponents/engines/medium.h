#ifndef MEDIUM_H
#define MEDIUM_H

class Medium final: public Engine {
    public:
        int makeAMove(Board *game) override;
        

};

#endif