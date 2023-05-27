#include "../include/my_library.h"

/// @brief Converts the letter c to lower case, if possible.
/// @param c character to be converted
/// @return c converted to lower case, if possible.
int my_tolower(int c) {
    if (c >= 'A' && c<= 'Z')
        return c + 32;
    return c;
}