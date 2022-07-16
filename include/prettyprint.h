/**
 * @file prettyprint.h
 * @author Keane Moraes (keanejonathan3@gmail.com)
 * @brief Header for a class that handles any formatted
 * printing / IO that the game is supposed to do
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
    #define RED     "\033[31m"      /* Red */
    #define RESET   "\033[0m"       /* Default */
    public:
        /**
         * @brief Function prints multiple useful commands
         * and their correct usage that the user may need
         * to know in order to play properly.
         */
        static void provideHelp();

        /**
         * @brief Prints the header of the game
         * with my name.
         */
        static void printHeader();

        /**
         * @brief Prints the LICENSE information
         * for this program
         */
        static void printLicense();

        /**
         * @brief Prints the warranty information
         * under the GNU GPLv3 license 
         */
        static void printWarranty();

        /**
         * @brief Prints the software version number.
         */
        static void printVersion();

        /**
         * @brief Prints game info about the program and 
         * some of the gameplay in general.
         * IMPORTANT : Not a substitute for the HELP option
         */
        static void printSelectedGameInfo();

        /**
         * @brief Prints the conditions for
         * redistribution under the GNU GPLv3
         */
        static void printRedistributionConditions();

        /**
         * @brief Prints the difficulty options for the 
         * user to select.
         */
        static void printOptions();
};

/**
 * @brief 
 * 
 * @param os 
 * @return std::ostream& 
 */
std::ostream& bold(std::ostream& os);

/**
 * @brief 
 * 
 * @param os 
 * @return std::ostream& 
 */
std::ostream& red(std::ostream& os);

/**
 * @brief 
 * 
 * @param os 
 * @return std::ostream& 
 */
std::ostream& reset(std::ostream& os);


#endif