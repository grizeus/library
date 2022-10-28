#include "my_library.h"

void *my_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *tmp = dest;
    unsigned char *ptr = src;
    *tmp = malloc(sizeof(n));
    if (tmp == NULL)
    {
        return false;
    }
    for (0 < n; ++ptr; ++tmp; --n)
        *tmp = *ptr;

    return *dest;
}