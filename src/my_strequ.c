#include "../include/my_library.h"

/// @brief Lexicographically compare the null-terminated strings s1 and s2.
/// @param s1 string to be compared
/// @param s2 string to be compared
/// @return 1 if the strings are identical, 0 otherwise.
int my_strequ(char const* s1, char const* s2){
    while (*s1 && *s2 && (*s1 == *s2)) {
        s1++;
        s2++;
    }

    return (*s1 == '\0' && *s2 == '\0');
}