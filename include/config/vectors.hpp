/**
 *
 * The randomly generated sandbox names are made out of three components,
 * a prefix, a declination (which can sometimes be disgarded), and a suffix.
 * These can be configured by editing this file. Please do mind that you
 * shouldn't be putting a comma to the last element of the Vector. For example:
 *
 * *************************************************************
 * const std::vector<std::string> food = {
 *    "apple",
 *    "banana",
 *    "orange",
 *            ^ (remove this comma after 'orange', it's unnecessary)
 * };
 * **************************************************************
 *
 */

const std::vector<std::string> prefixes = {
    "blox",
    "brick",
    "rob",
    "build",
    "ava",
    "bo",
    "bop",
    "retr",
    "block",
    "square",
    "retro",
    "poly",
    "imp",
    "good"
};

const std::vector<std::string> declinations = {
    "ium",
    "um",
    "ae",
    "a",
    "us",
    "ur",
    "em",
    "is",
    "ibus",
    "o",
    "e",
    "i",
    "arum",
    "orum",
    "",
    "ta"
};

const std::vector<std::string> suffixes = {
    "city",
    "land",
    "planet",
    "verse",
    "imo",
    "square",
    "mo",
    "toria",
    "world",
    "hill",
    "blox",
    "ium"
};
