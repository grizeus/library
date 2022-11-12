#include "my_library.h"

void* my_memalloc(size_t size)
{
    unsigned char *ptr = malloc(size * sizeof(char));
    if (ptr == NULL)
        return NULL;
    my_bzero(ptr, size);
    return ptr;
}