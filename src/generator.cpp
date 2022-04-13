#include "../include/libs.hpp"
#include "../include/config.hpp"

void write_contents(std::ofstream&, int);

int main() {

    std::string outFile = "sandbox_names.txt";

    std::cout << "[generator]: Writing names into '" << outFile << "'...\n";

    std::ofstream output;
    output.open(outFile);

    output << "[This file has been generated by the Sandbox Name Generator]\n\n";
    output << "The avalible prefixes, declinations & suffixes are listed below. You can add and/or remove them by editing the 'include/config.hpp' file.\n";
    output << "[PREFIXES]: ";
    write_contents(output, PREFIX_ARR_SIZE);
    output << "\n[SUFFIXES]: ";
    write_contents(output, SUFFIXES_ARR_SIZE);
    output << "\n[DECLINATIONS]: ";
    write_contents(output, DECLINATIONS_ARR_SIZE);
    output << "\n\n";

    int generation_time = 1;

    for (int i = 0; i < PREFIX_ARR_SIZE; ++i) {
        for (int j = 0; j < DECLINATIONS_ARR_SIZE; ++j) {
            for (int k = 0; k < SUFFIXES_ARR_SIZE; ++k) {
                output << "[#" << generation_time << "]: New unique  name: '" << prefixes[i] << declinations[j] << suffixes[k] << "'\n";
                generation_time++;
            }
        }
    }

    output.close();

    std::cout << "[generator]: Done. Check for the '" << outFile << "' on the current working directory.\n";

    return 0;
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

