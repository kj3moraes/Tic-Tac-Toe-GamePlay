/**
 * @file main.cc
 * @author Keane Moraes (keanejonathan3@gmail.com)
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
#include <memory>
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

/**
 * @brief Takes in the command line arguments and provides
 * the user with information on the game and other aspects
 * @param argc number of arguments
 * @param argv string array of arguments
 */
void handleCommandLineArgs(int &argc, char *argv[]) {
    string command = (string)(argv[1]);
    if (command == "--info" || command == "-i") {
        PrettyPrint::printHeader();
        PrettyPrint::printSelectedGameInfo();
    } else if (command == "--help" || command == "-h") {
        PrettyPrint::provideHelp();
    } else if (command == "--version" || command == "-v") {
        PrettyPrint::printVersion();
    } else if (command == "") {
        
    } else {
        cerr << "Invalid command line argument. Refer to README file" << endl;
    }
}

/**
 * @brief 
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
void determinePlayerDifficulty(Player *p, char playerType, char difficultySelection) {
    switch (difficultySelection) {
        case '1':
        case 'H':
        case 'h':
            cout << "Human player" << endl;
            p = new Human(playerType);
            break;

        case '2':
        case 'E':
        case 'e':
            cout << "Easy engine" << endl;
            p = new Easy(playerType);
            break;

        case '3':
        case 'M':
        case 'm':
            cout << "Medium engine" << endl;
            p = new Medium(playerType);
            break;

        case '4':
        case 'A':
        case 'a':
            cout << "Hard engine" << endl;
            p = new Hard(playerType);
            break;
    }
}

int main(int argc, char *argv[]) {
    if (argc > 1) {
        handleCommandLineArgs(argc, argv);
        return 0;
    }
    
    PrettyPrint::printHeader();
    PrettyPrint::printLicense();

    string command;
    char playerDiff1, playerDiff2;
    Player *p1 = nullptr, *p2 = nullptr;
    Board *playground = new Board(3,3, 'X', 'O', ' ');

    PrettyPrint::printOptions();
    cout << ">> ";
    cin >> command;

    while (command != "exit") {
        if (command == "help") {
            PrettyPrint::provideHelp();
        } else if (command == "warr") {
            PrettyPrint::printWarranty();
        } else if (command == "cond") {
            PrettyPrint::printRedistributionConditions();
            cout << endl;
        } else if (command == "set") {
            char input;
            cin >> input;

            cin >> input;
            playground->setX(input);
            cin >> input;
            playground->setO(input);
            cin >> input;
            playground->setBLANK(input);
        } else {
            
            // ASSIGN PLAYER DIFFICULTIES
            cin >> playerDiff1;
            cin >> playerDiff2;
            
            cout << "\nPlayer 1 will be the ";
            determinePlayerDifficulty(p1, playground->getX(), playerDiff1);
            cout << "Player 2 will be the ";
            determinePlayerDifficulty(p2, playground->getO(), playerDiff2);

            // 
        }
        cout << ">> ";
        cin >> command;
    }
    cout << "Thank you for playing the game" << endl;
    delete playground;
}

