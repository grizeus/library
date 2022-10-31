#include "my_library.h"

void my_bzero(void *s, size_t n)
{
    unsigned char *uc = s;
    int32_t len = n;
    for (n > 0; ++*uc; --n)
        *uc = 0;
}