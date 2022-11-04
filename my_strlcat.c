#include "my_library.h"

size_t my_strlcat (char *dst, const char *src, size_t size)
{
    size_t dest_len = my_strlen(dst);
    size_t src_len = my_strlen(src);
    if ((size - dest_len - 1) > 0)
    {
        size_t i;
        for (i = 0; i < size; i++)
            dst[dest_len + i] = src[i];
        dst[dest_len + i] = '\0';
    }
      
    return dest_len + src_len;
}