#include "my_library.h"

/// @brief Locates the first occurrence of c (converted to an unsigned char) in memory block src.
/// @param src 
/// @param c 
/// @param n 
/// @return pointer to the located byte or NULL if no such byte exists within n bytes
void* my_memchr(const void* src, int c, size_t n){
    const unsigned char *ptr = (const char*)src;
    if (ptr == NULL)
        return NULL;
    
    while (n > 0){
        if (*ptr == c)
            return (void*)ptr;
        ptr++;
        n--;
    }
    return NULL;
}