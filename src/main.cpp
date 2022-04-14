#include "../include/libs.hpp"
#include "../include/config/vectors.hpp"
#include "../include/macros.hpp"
#include "../include/config/options.hpp"

#include "./better_rand.cpp"
#include "./write_contents.cpp"

int main(void) {

    std::vector<std::string> names;

    std::cout << "[sandbox-name-generator]: Writing names into '" << OUTPUT_FILE << "'...\n";

    std::ofstream output;
    output.open(OUTPUT_FILE);

    if (!PLAIN_OUTPUT) {
        output << "[This file has been generated by the Sandbox Name Generator]\n\n";
        output << "The avalible prefixes, declinations & suffixes are listed below. You can add and/or remove them by editing the 'include/config.hpp' file.\n";
        output << "[PREFIXES]: ";
        write_contents(output, PREFIX_ARR_SIZE);
        output << "\n[SUFFIXES]: ";
        write_contents(output, SUFFIXES_ARR_SIZE);
        output << "\n[DECLINATIONS]: ";
        write_contents(output, DECLINATIONS_ARR_SIZE);
        output << "\n\n";
    }

    for (size_t i = 0; i < PREFIX_ARR_SIZE; ++i) {
        for (size_t j = 0; j < DECLINATIONS_ARR_SIZE; ++j) {
            for (size_t k = 0; k < SUFFIXES_ARR_SIZE; ++k) {
                names.push_back(prefixes.at(i) + declinations.at(j) + suffixes.at(k));
            }
        }
    }

    if (NAME_GENERATION_COUNT == DEFAULT_NAME_COUNT) {
        for (size_t i = 0; i < NAMES_ARR_SIZE; ++i) {
            if (PLAIN_OUTPUT) {
                output << names.at(i) << "\n";
            } else {
                output << "[#" << i + 1 << "]: New unique  name: '" << names.at(i) << "'\n";
            }
        }
    } else if (NAME_GENERATION_COUNT < DEFAULT_NAME_COUNT) {
        for (size_t i = 0; i < NAME_GENERATION_COUNT; ++i) {
            if (PLAIN_OUTPUT) {
                output << names.at(better_rand(0, NAMES_ARR_SIZE - 1)) << "\n";
            } else {
                output << "[#" << i + 1 << "]: New unique  name: '" << names.at(better_rand(0, NAMES_ARR_SIZE - 1)) << "'\n";
            }
        }
    } else {
        std::cout << "'NAME_GENERATION_COUNT' variable exceeds its limits.\n";
        return 1;
    }

    output.close();

    std::cout << "[sandbox-name-generator]: Complete. Check for the '" << OUTPUT_FILE << "' on the current working directory.\n";

    return 0;
}

