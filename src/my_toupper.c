#include "../include/my_library.h"

/// @brief Converts the letter c to upper case, if possible.
/// @param c character to be converted
/// @return c converted to upper case, if possible.
int my_toupper(int c) {
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}