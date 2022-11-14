#include "my_library.h"

char *my_strdup(const char *s)
{
    size_t len = my_strlen(s);
    char *tmp = malloc(sizeof(len));

    my_memcpy(tmp, s, len);
    return tmp;
}