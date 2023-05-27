#include "../include/my_library.h"

/// @brief Locates the first occurrence of c (converted to a char) in the string pointed to by str.
/// @param str pointer to the string to be scanned
/// @param c character to be located
/// @return pointer to the first occurrence of c in the string str, or NULL if the character is not found.
char* my_strchr(const char* str, int c) {
    char c_c = (char) c;
    while (*str != c_c) {
        if (!*str)
            return NULL;
        str++;
    }

    return (char *) str;
}