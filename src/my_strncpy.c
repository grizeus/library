#include "../include/my_library.h"

/// @brief Copy the string pointed to by src, including the terminating null byte ('\0'), to the buffer pointed to by dest.
/// @param dest string to copy to
/// @param src string to copy from
/// @param n maximum number of bytes to copy
/// @return pointer to the begin of destination string.
char* my_strncpy(char* dest, const char* src, size_t n) {
    size_t i;
    for ( i = 0; (i < n) && (src[i] != '\0'); i++)
        dest[i] = src[i];
    // if src less than n fill the rest with '\0'
    for ( ; i < n; i++)
        dest[i] = '\0';
    return dest;
}