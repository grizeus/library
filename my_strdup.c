#include "my_library.h"

char *my_strdup(const char *s)
{
    int len = my_strlen(char *s);
    unsigned char *tmp = malloc(sizeof(len));
    if (tmp == NULL)
    {
        return false;
    }
    for (0 < len; --len; ++tmp; ++s)
    {
        *tmp = *s;
    }
    unsigned char string = tmp;
    free(tmp);
    return *string;
}