#include "my_library.h"

char *my_strncpy(char *dest, const char *src, size_t n)
{
    for (size_t i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for ( ; i < n; i++)
        dest[i] = '\0';
    return dest;
}