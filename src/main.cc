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
#include <iomanip>
#include <string>
#include <sstream>
#include <memory>
#include <sstream>
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
void determinePlayerDifficulty(Player *&p, char playerType, char difficultySelection) {
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

    string command, token;
    char playerDiff1, playerDiff2;
    Player *p1 = nullptr, *p2 = nullptr;
    unique_ptr<Board> playground = make_unique<Board>(3,3, 'X', 'O', ' ');

    PrettyPrint::printOptions();
    cout << ">> ";
    getline(cin, command);

    // INITAL GAME SETUP
    while (command != "exit" && command != "quit") {
        istringstream ss{command};
        ss >> token;
        if (token == "help") {
            PrettyPrint::provideHelp();
        } else if (token == "warr") {
            PrettyPrint::printWarranty();
        } else if (token == "cond") {
            PrettyPrint::printRedistributionConditions();
            cout << endl;
        } else if (token == "set") {
            char input;
            istringstream s{command.substr(4)};
            
            // REDEFINING THE BOARD PIECES
            s >> input;
            playground->setX(input);
            cout << "User has redefined X as " << input << endl;
            s >> input;
            playground->setO(input);
            cout << "User has redefined O as " << input << endl;
            s >> input;
            playground->setBLANK(input);
            cout << "User has redefined BLANK as " << input << endl;
            playground->resetBoard();
        } else if (command == "menu") {
            PrettyPrint::printOptions();
        } else {
            
            ss >> token;
            playerDiff1 = token.at(0);
            playerDiff2 = token.at(1);
            
            cout << "\nPlayer 1 will be the ";
            determinePlayerDifficulty(p1, playground->getX(), playerDiff1);
            cout << "Player 2 will be the ";
            determinePlayerDifficulty(p2, playground->getO(), playerDiff2);
            break;
        }
        cout << "\n>> ";
        getline(cin, command);
    }

    // GAME STARTS
    bool isWin;
    char playDecision;
    while (!playground.get()->isBoardFull()) {
        p1->makeAMove(playground.get());
        playground->displayBoard();
        isWin = Result::isWinner(playground.get(), p1->getPlayerType());
        if (isWin) {
            cout << "P1 Wins" << endl;
            // cout << "\nDo you want to play again (type 'y' or 'n'):";
            // cin >> playDecision;
            // if (playDecision == 'y') {
            //     main(argc, argv);
            // }
            break;
        } 

        if (playground->isBoardFull()) {
            break;
        }

        p2->makeAMove(playground.get());
        playground->displayBoard();
        isWin = Result::isWinner(playground.get(), p2->getPlayerType());
        if (isWin) {
            cout << "P2 Wins" << endl;
            // cout << "\nDo you want to play again (type 'y' or 'n'):";
            // cin >> playDecision;
            // if (playDecision == 'y') {
            //     main(argc, argv);
            // }
            break;
        }
    }
    
    if (isWin == false) {
        cout << "ITS A DRAW :( !" << endl;
    }
    cout << "Thank you for playing the game" << endl;
}

