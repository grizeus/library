#include "my_library.h"

void *my_memset (void *s, int c, size_t n)
{
    unsigned char *unsigned_s = s;
    unsigned char unsigned_c = c;
    while (0 < n)
    {
        *unsigned_s += 1;
        n -= 1;
        *unsigned_s = unsigned_c;
    }
    return s;
}