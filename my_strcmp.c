#include "my_library.h"

/// @brief Compares the string pointed to by s1 to the string pointed to by s2.
/// @param s1 string to be compared
/// @param s2 string to be compared
/// @return positive if s1 is lexicographically greater than s2, negative if s1 is less than s2, 0 if s1 is equal to s2.
int my_strcmp(const char *s1, const char *s2) {
    while (*s1 && *s1 == *s2) {
        s1++;
        s2++;
    }

    return *(unsigned char *)s1 - *(unsigned char *)s2;
}