 #include "my_library.h"

char *my_strcpy(char *dest, const char *src)
{
    int len = my_strlen(*src);
    for (len > 0; --len)
        my_memcpy(dest, src, len);
    return dest;
}