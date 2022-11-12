#include "my_library.h"

void* my_memalloc(size_t size)
{
    unsigned char *ptr = malloc(size);
    if (ptr == NULL)
        return (NULL);
    my_bzero(ptr, size);
    return ((void *)ptr);
}