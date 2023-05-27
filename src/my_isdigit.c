#include "../include/my_library.h"

/// @brief checks for a digit (0 through 9)
/// @param c 
/// @return 1 if c is a digit, 0 otherwise
int my_isdigit(int c)
{
     if (c >= '0' && c <= '9')
           return 1;
     return 0;
}