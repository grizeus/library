#include "my_library.h"

void *my_memccpy(void *dest, const void *src, int c, size_t n)
{
    void* ptr = my_memchr(src, c, n);
    if (ptr != NULL)
        my_memcpy(dest, src, ptr - src + 1);
    
    my_memcpy(dest, src, n);
}