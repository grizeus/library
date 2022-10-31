#include "my_library.h"

size_t my_strlen(const char *s)
{
     const char *ptr = s;
     
     while ( *ptr )
     {
        ++ptr;
     }
     
    return ptr - s;
}