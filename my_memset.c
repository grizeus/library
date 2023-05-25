#include "my_library.h"


void *my_memset (void *src, int c, size_t n)
{
    char* ptr = (char *)src;
    while (n-- && *ptr != '\0')
        *ptr++ = (unsigned char)c;
    return src;
}
// memset() - fill memory with a constant byte