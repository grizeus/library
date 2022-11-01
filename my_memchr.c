#include "my_library.h"

void *my_memchr(const void *s, int c, size_t n)
{
    const char *ptr = s;
    long int len = n;
    while (len > 0)
    {   
        --len;
        ++ptr;
        if (*ptr == c)
            return (void *) ptr;
    }
    return NULL;
}