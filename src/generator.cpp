#include <iostream>
#include <fstream>
#include <algorithm>
#include <random>
#include <vector>
#include <string>

#include "config.hpp"

void write_contents(std::ofstream&, int);

int main() {

    /* Initialization of variables */

    std::string selectedPrefix, selectedDeclination, selectedSuffix, combo;

    std::vector<std::string> names;

    /* Providing information to the text file */

        std::cout << "Writing...";


    std::ofstream output;
    output.open("names.txt");
    output << "[This file has been generated by the Name Generator]\n\n";
    output << "The avalible prefixes, declinations & suffixes are listed below. You can add more if you wish by modifying the source code.\n";
    output << "[PREFIXES]: ";
    write_contents(output, PREFIX_ARR_SIZE);
    output << "\n[SUFFIXES]: ";
    write_contents(output, SUFFIXES_ARR_SIZE);
    output << "\n[DECLINATIONS]: ";
    write_contents(output, DECLINATIONS_ARR_SIZE);

    /* Random string generation */

    output << "\n\n";


    int generated_name = 1;

        for (int i = 0; i < PREFIX_ARR_SIZE; ++i) {
            for (int j = 0; j < DECLINATIONS_ARR_SIZE; ++j) {
                for (int k = 0; k < SUFFIXES_ARR_SIZE; ++k) {
                    output << "[#" << generated_name << "]: New unique  name: '" << prefixes[i] << declinations[j] << suffixes[k] << "'\n";
                    generated_name++;
                }
            }
        }

        output.close();
}

void write_contents(std::ofstream &output, int type) {
    int arr = 0; /* 1 is for Prefixes, 2 is for Declinations, 3 is for Suffixes */
    if (type == PREFIX_ARR_SIZE) { arr = 1; }
    else if (type == DECLINATIONS_ARR_SIZE) { arr = 2; }
    else if (type == SUFFIXES_ARR_SIZE) { arr = 3; }

    for (int i = 0; i < type; ++i) {
        if ((i + 1) == type) {
            if (arr == 1) { output << "'" << prefixes[i] << "' "; }
            else if (arr == 2) { output << "'" << declinations[i] << "' "; }
            else if (arr == 3) { output << "'" << suffixes[i] << "' "; }

        } else {
            if (arr == 1) { output << "'" << prefixes[i] << "', "; }
            else if (arr == 2) { output << "'" << declinations[i] << "', "; }
            else if (arr == 3) { output << "'" << suffixes[i] << "', "; }
        }
    }
}

