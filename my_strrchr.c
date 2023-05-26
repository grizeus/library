#include "my_library.h"

/// @brief Locates the last occurrence of c (converted to a char) in the string pointed to by str.
/// @param str string to be scanned
/// @param c character to be searched
/// @return pointer to the last occurrence of the character c in the string str, or NULL if the character is not found.
char* my_strrchr(const char* str, int c) {
    const char* last_occurrence = NULL;
    while (*str != '\0') {
        if (*str == (char)c)
            last_occurrence = str;
        str++;
    }
    if (c == '\0')
        return (char*)str;
    return (char*)last_occurrence;
}