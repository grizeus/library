#include "../include/my_library.h"

/// @brief isalnum() - checks for an alphanumeric character
/// @param c
/// @return 1 if c is a letter or a digit, 0 otherwise
int my_isalnum(int c)
{
     if (my_isdigit(c) && my_isalpha(c))
          return 1;
     return 0;
}