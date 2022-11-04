#include "my_library.h"

char *my_strrchr(const char *s, int c)
{
    const char *ptr = s;
    size_t len = my_strlen(s);
    for (size_t i = 0; len > i; len--)
    {
        if (ptr[len] == c)
            return (void *) ptr;
    }
    return NULL;
}