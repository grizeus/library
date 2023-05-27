#include "../include/my_library.h"

/// @brief isprint() - checks for a printable character
/// @param c
/// @return 1 if c is a printable character, 0 otherwise
int my_isprint(int c)
{
    if ((c >= 0x20) && (c <= 0x7e))
        return 16384; // 2^14 - magic number
    return 0;
}