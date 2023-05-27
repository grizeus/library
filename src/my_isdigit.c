#include "../include/my_library.h"

/// @brief checks for a digit (0 through 9)
/// @param c 
/// @return value greater then 0 if c is a digit, 0 otherwise
int my_isdigit(int c)
{
     if (c >= 0x30 && c <= 0x39)
           return 2048; // 2^11 - magic number
     return 0;
}