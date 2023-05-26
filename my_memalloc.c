#include "my_library.h"

/// @brief Allocates (with malloc) and retuns a "fresh" memory area.
/// @param size 
/// @return ptr to allocated memory area or NULL if allocation fails
void* my_memalloc(size_t size) {
    void* ptr = malloc(size);
    if (ptr == NULL)
        return NULL;
    my_bzero(ptr, size);
    return ptr;
}