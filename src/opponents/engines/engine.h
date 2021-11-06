#ifndef ENGINE_H
#define ENGINE_H
#include <random>

class Engine: public Player {
    protected:
        int* generateRandomPosition();
};
#endif