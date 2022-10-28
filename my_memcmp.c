#include "my_library.h"

int my_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *ptr1 = s1;
    unsigned char *ptr2 = s2;
    int long sum = 0;
    for (n > 0; ++ptr1; ++ptr2)
    {   long tmp = ptr1 - ptr2;
        sum += tmp;
    }
    return sum;
}