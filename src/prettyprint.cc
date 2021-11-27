/**
 * @file prettyprint.cc
 * @author Keane Moraes (keanejonathan3@gmail.com)
 * @brief Implementation of class for printing information with
 * necessary formatting
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
*/
#include "prettyprint.h"
using namespace std;

void PrettyPrint::provideHelp() {
    cout << bold << "\nTicTacToe Game" << reset << endl;
    cout << "This is a text-based game interface that allows the user to play against an assortment of engines (Easy, Medium, Hard) or another Human" << endl;
    cout << "The game has a specific type of input that is discussed below. "<< RED << "Please stick to it else you might get an error" << RESET << endl;
    cout << "This software is licensed under the GNU GPLv3. A copy of it is found in the /src folder" << endl;
    cout << bold << "\nCOMMAND LINE OPTIONS" << endl;
    cout << bold << "\t --help" << reset << "  outputs this help information" << endl;
    cout << bold << "\t --info" << reset << "  provides a brief overview of the game and what the objective is" << endl;
    cout << bold << "\t --version" << reset << "  prints the version number of this executable" << endl;

    cout << bold << "\nGAMEPLAY OPTIONS" << endl;
    cout << bold << "\tstart <player1_type><player2_type>:" << reset << endl;
    cout << bold << "\t\tstart: " << reset << "Begins the game\n"
            << bold << "\t\t<player1_type>: " << reset << "Specifies the difficulty of the Player1 (user: Human, easy: Easy Engine, medium: Medium Engine, hard:Hard Engine)\n"
            << bold << "\t\t<player1_type>: " << reset << "Specifies the difficulty of the Player2 (user: Human, easy: Easy Engine, medium: Medium Engine, hard:Hard Engine)" << endl;
    cout << red << "\t\t" << "Remember there is no space between the <player1_type> and the <player2_type>, you must type them concatenated. Like 'he'" << reset << endl;
    cout << bold << "\n\t<player_type>: " << "The player_type can be one of 4 choices. The option menu prints this out." << endl;
    cout << bold << "\n\tmenu  "  << reset << "Prints the options of player difficulty that the user can choose from" << endl;
    cout << bold << "\n\tcond  " << reset << "Prints the conditions for redistributing the source \n\tcode under the GNU GPLv3 License" << endl; 
    cout << bold << "\n\twarr  " << reset << "Prints the warranty information under the GNU GPLv3 License" << endl; 
}

void PrettyPrint::printHeader() {
    // TOP PARTS OF T
    cout << " " << std::setfill('-') << std::setw(13) << "\t";
    cout << " " << std::setfill('-') << std::setw(13) << "\t";
    cout << " " << std::setfill('-') << std::setw(13) << "\n";
    
    cout << "/" << std::setfill(' ') << std::setw(13) << "/\t";
    cout << "/" << std::setfill(' ') << std::setw(13) << "/\t";
    cout << "/" << std::setfill(' ') << std::setw(13) << "/\t" << endl;

    cout << std::setfill('-') << std::setw(7) << "  " << std::setfill('-') << std::setw(6) << "\t";
    cout << std::setfill('-') << std::setw(7) << "  " << std::setfill('-') << std::setw(6) << "\t";
    cout << std::setfill('-') << std::setw(7) << "  " << std::setfill('-') << std::setw(6) << "\n";
    
    cout << std::setfill(' ') << std::setw(7) << "/  /";
    cout << std::setfill(' ') << std::setw(16) << "/  /";
    cout << std::setfill(' ') << std::setw(16) << "/  /" << endl;

    cout << std::setfill(' ') << std::setw(6) << "/  /";
    cout << std::setfill(' ') << std::setw(16) << "/  /";
    cout << std::setfill(' ') << std::setw(16) << "/  /" << endl;

    cout << std::setfill(' ') << std::setw(6) << "---- " << bold << "i c" << reset;
    cout << std::setfill(' ') << std::setw(13) << "---- " << bold << "a c" << reset;
    cout << std::setfill(' ') << std::setw(13) << "---- " << bold << "o e" << reset << endl;

    cout << "\n" ;
    cout << "This is a text-based game interface for Tic-Tac-Toe created by Keane Moraes.\n"
        "Instructions to play are in the README and Gameplay Instructions file. GLHF!" << endl;
}

void PrettyPrint::printLicense() {
    cout << bold << "\nTicTacToeGame Copyright (C) 2021 Keane Moraes" << reset << endl;
    cout << "This sofware is licensed under the GNU GPLv3 License." << endl;
    cout << "This program comes with ABSOLUTELY NO WARRANTY; for details type `warr'." << endl;
    cout << "This is free software, and you are welcome to redistribute it under certain\n"
    "conditions;type `cond' for details." << endl;
}

void PrettyPrint::printWarranty() {
    cout <<  "\nTHERE IS NO WARRANTY FOR THE PROGRAM, TO THE EXTENT PERMITTED BY"
        " APPLICABLE LAW.  EXCEPT WHEN OTHERWISE STATED IN WRITING THE COPYRIGHT"
        " HOLDERS AND/OR OTHER PARTIES PROVIDE THE PROGRAM \"AS IS\" WITHOUT WARRANTY"
        " OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, BUT NOT LIMITED TO,"
        " THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR"
        " PURPOSE.  THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE PROGRAM"
        " IS WITH YOU.  SHOULD THE PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF"
        " ALL NECESSARY SERVICING, REPAIR OR CORRECTION." << endl;
        }

void PrettyPrint::printRedistributionConditions() {
    cout << "\nRefer to this page  <https://www.gnu.org/licenses/gpl-3.0.txt> for information\n"
        "on the distribution conditions under the GNU GPLv3" << endl;
}

void PrettyPrint::printVersion() {
    cout << "TicTacToeGame: 4.0.0" << endl;
}

void PrettyPrint::printSelectedGameInfo() {
    cout << "\nThe game Tic-Tac-Toe is played on a standard 3x3 with"
        " Player 1 playing X's and\nPlayer 2 playing O's. In this game engine,"
        "you can choose which player you wanna\nand which opponent you want to play against\n"
        "\t1. Human\n\t2. Easy\n\t3. Medium\n\t4. Hard" << endl;
}

void PrettyPrint::printOptions() {
    cout << "\nThe options for a game are :" << endl;
    cout << "\t1. " << bold << "H" << reset << "uman" << endl;
    cout << "\t2. " << bold << "E" << reset << "asy" << endl;
    cout << "\t3. " << bold << "M" << reset << "edium" << endl;
    cout << "\t4. " << "H" << bold << "a" << reset << "rd" << endl;
    cout << "\nEnter the either the numbered options or the character options\n"
        "for starting in the prompt below for BOTH player 1 and 2" << endl;
 }

std::ostream& bold(std::ostream& os) {
    return os << "\e[1m";
}

std::ostream& red(std::ostream& os) {
    return os << RED;
}

std::ostream& reset(std::ostream& os) {
    return os << "\e[0m"; 
}
