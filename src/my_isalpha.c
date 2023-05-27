#include "../include/my_library.h"

/// @brief isalpha() - checks for an alphabetic character
/// @param c 
/// @return 1 if c is a letter, 0 otherwise
int my_isalpha(int c) {
     if ((c >= 0x61 && c <= 0x7A) || (c >= 0x41 && c <= 0x5A))
           return 1024; // 2^10 - magic number
     return 0;
}