#include "../include/my_library.h"

/// @brief Appends the string pointed to by src to the end of the string pointed to by dest.
/// @param dest pointer to the destination array, which should contain a C string, and be large enough to contain the concatenated resulting string
/// @param src C string to be appended
/// @param n maximum number of characters to be appended
/// @return pointer to the resulting string dest, which is a C string. 
char* my_strncat(char* dest, const char* src, size_t n) {
    char* dest1 = dest;

    while (*dest1 != '\0')
        dest1++;

    while (n-- && (*src != '\0')) {
        *dest1 = *src;
        dest1++;
        src++;
    }    

    return dest;
}