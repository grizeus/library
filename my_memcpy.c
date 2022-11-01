#include "my_library.h"

void *my_memcpy(void *dest, const void *src, size_t n)
{
    char *tmp = dest;
    const char *ptr = src;
    long int len = n;
    while (len > 0)
    {
        --len;
        ++tmp;
        ++ptr;
        *tmp = *ptr;
    }

    dest = tmp;
    return dest;
}