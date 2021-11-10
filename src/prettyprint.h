/**
 * @file prettyprint.h
 * @author Keane Moraes (keanejonathan3@gmail.com)
 * @brief Header for a class that handles any formatted
 * printing / IO that the game is supposed to do
 * 
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
#ifndef PRETTYPRINT_H
#define PRETTYPRINT_H
#include <string>
#include <iomanip>
#include <iostream>

class PrettyPrint final {
    public:
        /**
         * @brief Function prints multiple useful commands
         * and their correct usage that the user may need
         * to know in order to play properly.
         */
        static void provideHelp();

        /**
         * @brief 
         * 
         */
        static void printHeader();

        /**
         * @brief 
         * 
         */
        static void printLicense();

        /**
         * @brief 
         * 
         */
        static void printWarranty();

        /**
         * @brief 
         * 
         */
        static void printVersion();

        /**
         * @brief 
         * 
         */
        static void printSelectedGameInfo();

        /**
         * @brief 
         * 
         */
        static void printRedistributionConditions();

        /**
         * @brief 
         * 
         */
        static void printDifficultyOptions();
};

std::ostream& bold(std::ostream& os);
std::ostream& unbold(std::ostream& os);

#endif