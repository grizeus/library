#include "my_library.h"

char *my_strcat(char *dest, const char *src)
{
    size_t dest_len = my_strlen(dest);
    size_t src_len = my_strlen(src);
    size_t i;

    for (i = 0; i <= src_len; i++)
        dest[dest_len + i] = src[i];

    return dest;
}