#include "../include/my_library.h"

/// @brief my_bzero() - writes n zeroed bytes to the string s
/// @param s - pointer to memory area
/// @param n - number of bytes to be set to zero
/// @return none
void my_bzero(void* s, size_t n)
{
     my_memset (s, '\0', n);
}