#include "my_library.h"

/// @brief my_memset() - fill memory with a constant byte
/// @param src - pointer to memory area
/// @param c - constant byte
/// @param n - number of bytes to be set to constant byte
/// @return pointer to the memory area src
void* my_memset (void* src, int c, size_t n)
{
    char* ptr = (char *)src;
    while (n-- && *ptr != '\0')
        *ptr++ = (unsigned char)c;
    return src;
}