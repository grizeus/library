#include "my_library.h"

/// @brief isascii() - checks for an ASCII character
/// @param c
/// @return 1 if c is a 7-bit US-ASCII character code, between 0 and hex 0x7F inclusive, 0 otherwise
int my_isascii(int c) {
     if (c >= 0x0 && c <= 0x7F)
           return 1;
     return 0;
}