#include "my_library.h"

/// @brief Appends the string pointed to by src to the end of the string pointed to by dest.
/// @param dest pointer to the destination array, which should contain a C string, and be large enough to contain the concatenated resulting string
/// @param src C string to be appended
/// @return pointer to the resulting string dest, which is a C string.
char* my_strcat(char* dest, const char* src) {
    char* dest1 = dest;

    while (*dest1 != '\0')
        dest1++;

    while (*src != '\0') {
        *dest1 = *src;
        dest1++;
        src++;
    }

    *dest1 = '\0';

    return dest;
}