#include "my_library.h"

/// @brief Allocates (with malloc(3)) and returns a “fresh” substring from the string given as argument.
/// @param str string from which to create the substring
/// @param start index of the first character of the substring
/// @param len length of the substring
/// @return the substring
char* my_strsub(char const* str, unsigned int start, size_t len) {
    if (str == 0)
        return NULL;

    char* sub = my_strnew(len);

    if (sub == NULL)
        return NULL;

    for (size_t i = 0; i < len; i++) {
        sub[i] = str[start];
        start++;
    }

    return sub;
}