#include "../include/my_library.h"

/// @brief Copies n characters from src to dest.
/// @param dest pointer to the destination string
/// @param src pointer to the source string
/// @param n number of characters to be copied
/// @return dest pointer to the destination string
void* my_memmove(void* dest, const void* src, size_t n)
{
    char* c_dest = (char *) dest;
    char* c_src = (char *) src;
    
    if (c_dest <= c_src) {
        // copy from beginning and protect from copying '\0' in the middle of destination memory region
        while (n-- && (*c_src != '\0'))
            *c_dest++ = *c_src++;
    } else {
        c_dest += n;
        c_src += n;
        // copy from end and protect from pointing to the unaloc memory chunk (case src is pointing to the beginning )
        while (n-- && ((void *)c_src > (void *)src))
            *--c_dest = *--c_src;
    }

    return dest;
}