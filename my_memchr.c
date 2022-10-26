#include <string.h>

void *my_memchr(const void *s, int c, size_t n)
{
    unsigned char uc = c;
    unsigned char *string = s;
    
    for (n > 0; --n; ++string)
    {
        if (string != uc)
            continue;
            return NULL;
        else if (string == uc)
            return string;
    }
}