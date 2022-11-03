#include "my_library.h"

char *my_strchr(const char *s, int c)
{
    char *ptr = s;
    size_t len = my_strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (ptr[i] == c)
            return ptr - s;
    }
    return NULL;
}