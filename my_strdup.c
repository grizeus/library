#include "my_library.h"

char *my_strdup(const char *s)
{
    size_t len = my_strlen(s);
    char *string = my_memalloc(len + 1);
    my_memcpy(string, s, len);
    return string;
}