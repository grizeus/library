#include "my_library.h"

void* my_memalloc(size_t size)
{
    unsigned char *ptr = malloc(size);
    if (ptr == NULL)
        return (NULL);
    my_bzero(ptr, size);
    return ((void *)ptr);
}

/* Allocates (with malloc) and retuns a "fresh" memory area. 
The memory allocated is initialized to 0. If the allocation fails, the function returns NULL;
Param#1:    The size of the memory that needs to be allocated.
Return val: The allocated memory area */