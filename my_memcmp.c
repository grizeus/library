#include "my_library.h"

/// @brief Compares the first n bytes of memory area s1 and memory area s2.
/// @param s1 string to be compared
/// @param s2 string to be compared
/// @param n bytes to be compared
/// @return positive if s1 is lexicographically greater than s2, negative if s1 is less than s2, 0 if s1 is equal to s2.
int my_memcmp(const void *s1, const void *s2, size_t n)
{
    const char *ptr1 = s1;
    const char *ptr2 = s2;
    int sum = 0;
    for (unsigned int i = 0; i < n; i++) { 
        sum += ptr1[i] - ptr2[i];
        if (sum != 0)
            return sum;
    }
    return sum;
}