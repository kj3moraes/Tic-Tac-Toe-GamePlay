/**
 * @file prettyprint.cc
 * @author Keane Moraes (keanejonathan3@gmail.com)
 * @brief Program 
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
    cout << bold << "cond: " << unbold << "Prints the conditions for redistributing the source \n code under the GNU GPLv3 License" << endl; 
    cout << bold << "warr: " << unbold << "Prints the warranty information under the GNU GPLv3 License" << endl; 
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

    cout << std::setfill(' ') << std::setw(9) << "---- i c";
    cout << std::setfill(' ') << std::setw(16) << "---- a c";
    cout << std::setfill(' ') << std::setw(16) << "---- o e" << endl;

    cout << "\n" ;
    cout << "This is a text-based game interface for Tic-Tac-Toe created by Keane Moraes.\n"
        "Instructions to play are in the README and Gameplay Instructions file. GLHF!" << endl;
}

void PrettyPrint::printLicense() {
    cout << bold << "\nTicTacToeGame Copyright (C) 2021 Keane Moraes" << unbold << endl;
    cout << "This program comes with ABSOLUTELY NO WARRANTY; for details type `warr'." << endl;
    cout << "This is free software, and you are welcome to redistribute it under certain conditions;\ntype `cond' for details." << endl;
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
    cout << "\nRefer to the page on GNU GPLv3 at <https://www.gnu.org/licenses/>" << endl;
}

std::ostream& bold(std::ostream& os) {
    return os << "\e[1m";
}

std::ostream& unbold(std::ostream& os) {
    return os << "\e[0m"; 
}
