#include "my_library.h"

/// @brief atoi() - convert a string to an integer
/// @param my_string - string to be converted
/// @return integer value of converted string or 0 if conversion fails
int my_atoi(const char* my_string)
{
    // atoi() - convert a string to an integer
    const int INT_MAX = 2147483647;
    const int INT_MIN = -2147483648;
    int result = 0, sign = 1;
    // check for termination
    if (my_string == '\0')
        return 0;
    // skip white spaces and tabs
    while (*my_string == ' ' || *my_string == '\t' || *my_string == '\n' || *my_string == '\v' || *my_string == '\f' || *my_string == '\r')
        my_string++;
    // check for sign
    if (*my_string == '-')
        sign = -1;

    while (my_isdigit(*my_string) == 1)
    {
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && *my_string - '0' > INT_MAX % 10))
        {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }
        // convert to integer and add to result
        result = result * 10 + (*my_string - '0');
        my_string++;
    }
    // return result with right sign
    return result * sign;
}