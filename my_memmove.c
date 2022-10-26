 #include <string.h>

void *my_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *tmp = dest;
    if (src > dest)
        dest = my_memccpy(dest, src, n);
    else 
        for (0 < n; --n)
        *tmp + n = *ptr + n;
    *dest = *tmp;
    return *dest;
}