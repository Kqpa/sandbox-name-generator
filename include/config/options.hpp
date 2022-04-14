/**
 * `NAME_GENERATION_COUNT`
 *
 * The sandbox name generator generates a specific amount of names.
 * If the 'NAME_GENERATION_COUNT' variable is set to 'DEFAULT_NAME_COUNT',
 * it will generate as much as names it can. Although, this value can
 * be changed to generate a specific amount of names.
 *
 */
const size_t NAME_GENERATION_COUNT = DEFAULT_NAME_COUNT;

/**
 * `OUTPUT_FILE`
 *
 * The sandbox name generator will output the generated names into a file,
 * and the file name is set on this variable. By default, the names will
 * get outputted to a file named 'sandbox_names.txt'. This can be changed
 * by modifying the value of this variable.
 *
 */
const std::string OUTPUT_FILE = "sandbox_names.txt";

/**
 * `PLAIN_OUTPUT`
 *
 * The output file will contain additional information by default; such as
 * the avalible prefixes, amount of generations, etc. If you only want to
 * get the generated names, you will have to set this variable to true.
 *
 */
const bool PLAIN_OUTPUT = false;
