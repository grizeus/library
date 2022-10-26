#include <strings.h>

void my_bzero(void *s, size_t n)
{
    unsigned char *uc = s;
    for (n > 0; ++*uc; --n)
        *uc = 0;
}