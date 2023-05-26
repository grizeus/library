#include "my_library.h"

/// @brief Locates the first occurrence substring(needle) in the null-terminated string haystack.
/// @param haystack string to be scanned
/// @param needle substring to be searched
/// @return pointer to the first occurrence of the substring needle in the string haystack, or NULL if the substring is not found.
char* my_strstr(const char* haystack, const char* needle) {

    char* sub = needle;
    // empty string is always a substring
    if (*sub == 0)
        return haystack;

    for ( ; *haystack != 0; haystack++)
    {
        if (*haystack != *sub)
            continue;
        char* str = haystack;
        while (1) { // infinite loop
            if (*sub == 0)
                return haystack;
            if (*str++ != *sub++)
                break;
        }   
        sub = needle;
    }
    return NULL;
}