#include "my_library.h"

/// @brief Copies n characters from memory area src to memory area dest.
/// @param dest 
/// @param src 
/// @param n 
/// @return pointer to dest. When dest and src overlap, behavior is undefined. If dest or src is a null pointer, behavior is undefined. If n is less than zero, behavior is undefined.
void* my_memcpy(void* dest, const void* src, size_t n) {
    unsigned char* dest1 = (unsigned char *) dest;
    unsigned char* src1 = (unsigned char*) src;
    if (dest1 == NULL || src1 == NULL)
        return NULL;
    while (n > 0){
        *dest1 = *src1;
        dest1++;
        src1++;
        n--;
    }
    return dest;
}