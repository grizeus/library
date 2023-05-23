#include "my_library.h"

// memset() - fill memory with a constant byte
void *my_memset (void *s, int c, size_t n)
{
    unsigned char *ptr = s;
    while (n--)
        *ptr++ = (unsigned char)c;
    return s;
}