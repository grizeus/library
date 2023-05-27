#include "../include/my_library.h"

/// @brief isalpha() - checks for an alphabetic character
/// @param c 
/// @return 1 if c is a letter, 0 otherwise
int my_isalpha(int c)
{
     if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
           return 1;
     return 0;
}