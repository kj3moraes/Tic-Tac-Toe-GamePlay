#include "engine.h"

/**
 * @brief Generated a random 2-int array representing row and column
 * with min value 1 and max value 3
 * @return int* - the random array
 */
int* Engine::generateRandomPosition() {
    std::default_random_engine generator;
    std::uniform_int_distribution<int> dist(1, 4);
        
    int *randomCoords = new int[2];
    randomCoords[0] = dist(generator);
    randomCoords[1] = dist(generator);
    return randomCoords;
}