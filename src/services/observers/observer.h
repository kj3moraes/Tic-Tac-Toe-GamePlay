#ifndef __OBSERVER_H__
#define __OBSERVER_H__
    
#include "../board.h"

/* Codes integers for the different states of play to display
    1   display the introduction to the game
    2   inquire what the user wants to do
    3   ask which engines the user wants to play
    4   display the board after sequence of play
    5   display the victory splash screen
    6   display the game over splash screen
*/
#define CODE_INTRO_BACKGROUND 1
#define CODE_PLAY_MENU 2
#define CODE_ENGINE_MENU 3
#define CODE_BOARD_STATE 4
#define CODE_VICTORY_SPLASH 5
#define CODE_EXIT_THANKS 6

class Observer {

    public:
        virtual void notify(const int) = 0;
        virtual ~Observer();

};

#endif /* OBSERVER_H */