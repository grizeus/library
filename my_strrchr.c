#include "my_library.h"

char *my_strrchr(const char *s, int c)
{
    char *ptr = s;
    size_t len = my_strlen(s);
    for (0 <= len; --len)
    {
        if (ptr[i] == c)
            return ptr - s;
    }
    return NULL;
}