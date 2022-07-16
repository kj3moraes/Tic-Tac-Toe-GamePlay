#ifndef __NCURSES_PRINTER_H__
#define __NCURSES_PRINTER_H__

#include <ncurses.h>
#include <iostream>
#include <string>

#include "observer.h"

#define SQUARE_LEN 3
#define NUM_SQUARES (SQUARE_LEN * SQUARE_LEN)

#define X_COLOUR 1
#define O_COLOUR 2
#define BOARD_COLOUR 4 

class NCursesPrinter : public Observer {
    private:
        Board* board;

        void displayGameBackground();

        void displayChoice();

        void displayEngineMenu();

        void displayVictorySplash();

    public: 

        NCursesPrinter(Board*);
        ~NCursesPrinter();

        void notify(const int) override;

};
#endif /* __NCURSES_PRINTER_H__ */