#include "my_library.h"

void *my_memmove(void *dest, const void *src, size_t n)
{
    char *my_dest = (char *) dest;
    char *my_src = (char *) src;
    char *temp = malloc(sizeof(char) * n);

    for (unsigned int i = 0; i < n; i++)
            temp[i] = my_src[i];

    for (unsigned int i = 0; i < n; i++)
            my_dest[i] = temp[i];
    
    free(temp);
    return my_dest;
}