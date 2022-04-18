#ifndef SANDBOXNAMEGENERATOR_BETTERRAND_HPP
#define SANDBOXNAMEGENERATOR_BETTERRAND_HPP

/**
 * @author uno20001#3061 (from TPH)
 * @brief A better alternative to `rand()`
 */

int better_rand(int a = 0, int b = RAND_MAX - 1) {

    static std::random_device rd;

    static std::mt19937 gen { rd() };

    std::uniform_int_distribution<> distrib { a, b };

    return distrib(gen);

}

#endif /* SANDBOXNAMEGENERATOR_BETTERRAND_HPP */