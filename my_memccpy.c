#include <string.h>

void *my_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char *tmp = *src;
    unsigned char uc = c;
    while (*tmp != uc)
    {   
        my_memcpy(dest, src, n);
        return NULL;
    }
    if (*tmp == uc)
    {   
        ++*tmp;
        return *tmp;
    }
}