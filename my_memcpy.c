#include "my_library.h"

void *my_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char* dest1 = (unsigned char *) dest;
    unsigned char* src1 = (unsigned char*) src;
    for (size_t i = 0; i < n; i++){
        dest1[i] = src1[i];
    }
    return dest1;
}