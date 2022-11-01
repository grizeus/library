#include "my_library.h"

int my_memcmp(const void *s1, const void *s2, size_t n)
{
    const char *ptr1 = s1;
    const char *ptr2 = s2;
    int long sum = 0;
    for (unsigned int i = 0; i < n; i++)
    {   
        int long tmp = ptr1[i] - ptr2[i];
        sum += tmp;
    }
    return sum;
}