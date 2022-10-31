#include "my_library.h"

void *my_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *tmp = dest;
    const char *ptr = src;
    *tmp = malloc(sizeof(n));
    while ( *ptr )
    {
        --n;
        ++tmp;
        ++s;
        *tmp = *ptr;
    }

    dest = tmp;
    free(tmp);
    return *dest;
}