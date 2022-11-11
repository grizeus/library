#include "my_library.h"

void *my_memset (void *s, int c, size_t n)
{
    unsigned char *unsigned_s = s;
    while (0 < n)
    {
        *unsigned_s = c;
        unsigned_s++;
        n--;
    }
    return (s);
}