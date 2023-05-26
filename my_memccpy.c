#include "my_library.h"

/// @brief Copies no more than n bytes from memory area src to memory area dest, stopping when the character c is found.
/// @param src memory area to be copied from
/// @param dest memory area to be copied to
/// @param c character to be searched
/// @param n maximum number of bytes to be copied
/// @return pointer to the next character in dest after c, or NULL if c was not found in the first n characters of src.
void* my_memccpy(void* dest, const void* src, int c, size_t n) {
    unsigned char* dest1 = (unsigned char*) dest;
    unsigned char* src1 = (unsigned char*) src;

    if (dest1 == NULL || src1 == NULL)
        return NULL;

    while (n > 0){
        *dest1 = *src1;
        if (*src1 == c)
            return dest1 + 1;
        dest1++;
        src1++;
        n--;
    }
    return NULL;
}