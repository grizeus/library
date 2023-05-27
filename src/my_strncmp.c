#include "../include/my_library.h"

/// @brief Compares the string pointed to by s1 to the string pointed to by s2.
/// @param s1 string to be compared
/// @param s2 string to be compared
/// @param n maximum number of characters to be compared
int my_strncmp(const char* s1, const char* s2, size_t n) {
    if (n == 0)
        return 0;
    do {
        if (*s1 != *s2++)
            return (*(unsigned char *)s1 - *(unsigned char*)--s2);
        if (*s1++ == 0)
            break;
    } while (--n != 0);
    return 0;
    
}