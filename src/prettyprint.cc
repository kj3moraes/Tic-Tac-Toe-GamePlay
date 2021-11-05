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

PrettyPrint::PrettyPrint() {

}

void PrettyPrint::provideHelp() {
    
}

void PrettyPrint::printLicense() {
    cout << bold << "TicTacToeGame Copyright (C) 2021 Keane Moraes" << unbold << endl;
    cout << "This program comes with ABSOLUTELY NO WARRANTY;" << endl;
    cout << "for details type `warr'. This is free software, and you are welcome" << endl;
    cout << "to redistribute it under certain conditions; type `cond' for details." << endl;
}

std::ostream& bold(std::ostream& os) {
    return os << "\e[1m";
}

std::ostream& unbold(std::ostream& os) {
    return os << "\e[0m"; 
}

int main() {
    PrettyPrint p;
    p.printLicense();
}