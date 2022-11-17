#include "my_library.h"

void *my_memchr(const void *s, int c, size_t n){
    const char *ptr = (const char*)s;
    if (ptr == NULL)
        return NULL;
    
    while (n > 0){   
        n--;
        ptr++;
        if (*ptr == c)
            break;
    }
}