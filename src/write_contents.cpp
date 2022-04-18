#ifndef SANDBOXNAMEGENERATOR_WRITECONTENTS_HPP
#define SANDBOXNAMEGENERATOR_WRITECONTENTS_HPP

/**
 * @brief Used to write the contents of the prefixes,
 * declinations and suffixes to the file with one function
 */

void write_contents(std::ofstream &output, size_t type) {

    int arr = 0; /* 1 is for Prefixes, 2 is for Declinations, 3 is for Suffixes */

    if (type == PREFIX_ARR_SIZE) { arr = 1; }
    else if (type == DECLINATIONS_ARR_SIZE) { arr = 2; }
    else if (type == SUFFIXES_ARR_SIZE) { arr = 3; }

    for (size_t i = 0; i < type; ++i) {
        if ((i + 1) == type) {
            if (arr == 1) { output << "'" << prefixes.at(i) << "' "; }
            else if (arr == 2) { output << "'" << declinations.at(i) << "' "; }
            else if (arr == 3) { output << "'" << suffixes.at(i) << "' "; }
        } else {
            if (arr == 1) { output << "'" << prefixes.at(i) << "', "; }
            else if (arr == 2) { output << "'" << declinations.at(i) << "', "; }
            else if (arr == 3) { output << "'" << suffixes.at(i) << "', "; }
        }
    }
}

#endif /* SANDBOXNAMEGENERATOR_WRITECONTENTS_HPP */