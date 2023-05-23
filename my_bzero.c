#include "my_library.h"

// my_bzero() - write zeroes to a byte string
void my_bzero(void *s, size_t n)
{
     my_memset (s, '\0', n);
}