#include "my_library.h"

size_t my_strlcat (char *dst, const char *src, size_t size)
{
    size_t dest_len = my_strlen(dst);
    size_t src_len = my_strlen(src);
    if ((size - dest_len - 1) > 0)
    {
        for (size_t i = 0; i < size; i++)
            dest[dest_len + i] = src[i];
        dest[dest_len + i] = '\0';
    }
      
    return dest_len + src_len;
}