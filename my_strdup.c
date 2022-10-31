#include "my_library.h"

char *my_strdup(const char *s)
{
    size_t len = my_strlen(s);
    char *tmp = malloc(sizeof(len));
    while ( *s )
    {
        --len;
        ++tmp;
        ++s;
        *tmp = *s;
    }
    char *string = tmp;
    free(tmp);
    return string;
}