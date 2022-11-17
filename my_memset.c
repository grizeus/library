#include "my_library.h"

void *my_memset (void *s, int c, size_t n)
{
    unsigned char *unsigned_s = (unsigned char*) s;
    size_t i = 0;
    while (i < n){
        unsigned_s[i] = c;
        i++;
    }
    return unsigned_s;
}