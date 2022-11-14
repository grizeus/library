#include "my_library.h"

void *my_memchr(const void *s, int c, size_t n)
{
    const char *ptr = s;
    long int len = n;
    while (len > 0)
    {   
        if (*ptr == c)
            return (void *) ptr;
        --len;
        ++ptr;
    }
    return NULL;
}