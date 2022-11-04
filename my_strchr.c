#include "my_library.h"

char *my_strchr(const char *s, int c)
{
    const char *ptr = s;
    size_t len = my_strlen(s);
    for (size_t i = 0; i < len; i++)
    {
        if (ptr[i] == c)
            return (void *) ptr;
    }
    return NULL;
}