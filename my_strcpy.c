 #include "my_library.h"

char *my_strcpy(char *dest, const char *src)
{
    int len = my_strlen(src);
    my_memcpy(dest, src, len);
    return dest;
}