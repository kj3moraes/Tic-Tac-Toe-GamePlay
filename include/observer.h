/**
 * @file observer.h
 * @author Keane Moraes
 * @brief Header file for the Observer class.
    Copyright (C) 2021 Keane Moraes

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
 * 
 */

#ifndef __OBSERVER_H__
#define __OBSERVER_H__
    
#include "board.h"

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