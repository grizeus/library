#include "my_library.h"

/// @brief Appends the string pointed to by src to the end of the string pointed to by dest.
/// @param dest pointer to the destination array, which should contain a C string, and be large enough to contain the concatenated resulting string
/// @param src C string to be appended
/// @param size size of the destination array
/// @return size of the resulting string dest, which is a C string.
size_t my_strlcat (char* dst, const char* src, size_t size) {
    size_t dst_len = my_strlen(dst);
    size_t src_len = my_strlen(src);
    // space left in dst
    size_t append_len = size - dst_len - 1;
    if (append_len > 0) {
        size_t i = 0;
        for (i; i < append_len && src[i] != '\0'; i++)
            dst[dst_len + i] = src[i];
        dst[dst_len + i] = '\0';
    }
      
    return dest_len + src_len;
}