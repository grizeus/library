#include "my_library.h"

/// @brief Sets every character of the string to the value '\0'
/// @param str string that needs to be cleared
/// @return none
void my_strclr(char *str)
{
    while (*str != '\0') {
        *str = '\0';
        str++;
    }

}