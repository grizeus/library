#include "my_library.h"

char *my_strdup(const char *s)
{
    size_t len = my_strlen(s);
    char *tmp = NULL;
    while ( *s )
        my_memcpy(tmp, s, len);
    char *string = tmp;
    return string;
}