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
