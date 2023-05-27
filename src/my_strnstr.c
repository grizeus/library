#include "../include/my_library.h"

/// @brief Locates the first occurrence substring(needle) in the string haystack, where not more than n characters are searched.
/// @param haystack string to be scanned
/// @param needle substring to be searched
/// @param n maximum number of characters to be searched
/// @return pointer to the first occurrence of the substring needle in the string haystack, or NULL if the substring is not found.
char* my_strnstr(const char* haystack, const char* needle, size_t n){

    char* sub = (char* ) needle;
    // empty string is always found
    if (*sub == 0)
        return (char* ) haystack;

    size_t needle_len = my_strlen(needle);
    // needle is longer than maximum bytes to search
    if (needle_len > n)
        return NULL;
    size_t remaining_len = n - needle_len;
    for ( ; *haystack != 0 && remaining_len >= needle_len; haystack++) {
        if (*haystack != *sub)
            continue;
        // when we find a match, we need to check if the rest of the string matches
        char* str = (char* ) haystack;
        while (1) { // infinite loop;
            if (*sub == 0)
                return (char* ) haystack;
            if (*str++ != *sub++)
                break;
        }
        // reset sub for next iteration
        sub = (char* ) needle;
        remaining_len--;
    }
    return NULL;
}