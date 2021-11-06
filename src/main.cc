/**
 * @file main.cc
 * @author your name (you@domain.com)
 * @brief The main program that allows the user to interact with 
 * the program and play the game.
 *
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
#include <iostream>
#include <string>
#include "prettyprint.h"
#include "opponents/player.h"
#include "opponents/human.h"
#include "opponents/engines/engine.h"
#include "opponents/engines/easy.h"
#include "opponents/engines/medium.h"
#include "opponents/engines/hard.h"
#include "services/board.h"
#include "services/result.h"
using namespace std;

int main(int argv, char *argc[]) {
    if (argv > 0) {

    }
    
    PrettyPrint::printHeader();
    PrettyPrint::printLicense();

}