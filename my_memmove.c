#include "my_library.h"

/// @brief Copies n characters from src to dest.
/// @param dest
/// @param src
/// @param n
/// @return dest pointer to the destination string
void* my_memmove(void* dest, const void* src, size_t n)
{
    char* c_dest = (char *) dest;
    char* c_src = (char *) src;
    
    if (c_dest <= c_src) {
        // copy from beginning
        while (n--)
            *c_dest++ = *c_src++;
    } else {
        // copy from end
        c_dest += n;
        c_src += n;
        while (n--)
            *--c_dest = *--c_src;
    }

    return dest;
}