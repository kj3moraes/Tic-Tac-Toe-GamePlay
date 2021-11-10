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
    cout << bold << "TicTacToe Game" << unbold << endl;
    cout << "This is a text-based game interface that allows the user to play against an assortment of engines (Easy, Medium, Hard) or another Human" << endl;
    cout << "The game has a specific type of input that is discussed below. Please stick to it else you might get an error" << endl;
    cout << bold << "\nstart <player1_type> <player2_type>: \n\tstart: " << unbold << "Begins the game\n\t"
            << bold << "<player1_type>: " << unbold << "Specifies the difficulty of the P1 (user: Human, easy: Easy Engine, medium: Medium Engine, hard:Hard Engine)\n\t"
            << bold << "<player1_type>: " << unbold << "Specifies the difficulty of the P2 (user: Human, easy: Easy Engine, medium: Medium Engine, hard:Hard Engine)" << endl;
    
    cout << bold << "<player_type>: " << "The player_type can be one of 4 choices. The option menu prints this out.";
    cout << bold << "\ncond: " << unbold << "Prints the conditions for redistributing the source \n\tcode under the GNU GPLv3 License" << endl; 
    cout << bold << "\nwarr: " << unbold << "Prints the warranty information under the GNU GPLv3 License" << endl; 
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

    cout << std::setfill(' ') << std::setw(6) << "---- " << bold << "i c" << unbold;
    cout << std::setfill(' ') << std::setw(13) << "---- " << bold << "a c" << unbold;
    cout << std::setfill(' ') << std::setw(13) << "---- " << bold << "o e" << unbold << endl;

    cout << "\n" ;
    cout << "This is a text-based game interface for Tic-Tac-Toe created by Keane Moraes.\n"
        "Instructions to play are in the README and Gameplay Instructions file. GLHF!" << endl;
}

void PrettyPrint::printLicense() {
    cout << bold << "\nTicTacToeGame Copyright (C) 2021 Keane Moraes" << unbold << endl;
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
        " on the distribution conditions under the GNU GPLv3" << endl;
}

void PrettyPrint::printVersion() {
    cout << "TicTacToeGame: v1.2.1" << endl;
}

void PrettyPrint::printSelectedGameInfo() {
    cout << "\nThe game Tic-Tac-Toe is played on a standard 3x3 with"
        " Player 1 playing X's and\nPlayer 2 playing O's. In this game engine,"
        "you can choose which player you wanna\nand which opponent you want to play against\n"
        "\t1. Human\n\t2. Easy\n\t3. Medium\n\t4. Hard" << endl;
}

void PrettyPrint::printOptions() {
    cout << "\nThe options for a game are :" << endl;
    cout << "\t1. " << bold << "H" << unbold << "uman" << endl;
    cout << "\t2. " << bold << "E" << unbold << "asy" << endl;
    cout << "\t3. " << bold << "M" << unbold << "edium" << endl;
    cout << "\t4. " << "H" << bold << "a" << unbold << "rd" << endl;
    cout << "\nEnter the either the numbered options or the character options\n"
        "for starting in the prompt below for BOTH player 1 and 2" << endl;
 }

std::ostream& bold(std::ostream& os) {
    return os << "\e[1m";
}

std::ostream& unbold(std::ostream& os) {
    return os << "\e[0m"; 
}
