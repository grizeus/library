#include "../include/my_library.h"

/// @brief Appends the string pointed to by src to the end of the string pointed to by dest.
/// @param dest pointer to the destination array, which should contain a C string, and be large enough to contain the concatenated resulting string
/// @param src C string to be appended
/// @param size size of the destination array
/// @return size of the resulting string dest, which is a C string.
size_t my_strlcat (char* dest, const char* src, size_t size) {
    size_t dest_len = my_strlen(dest);
    size_t src_len = my_strlen(src);
    // space left in dst
    size_t append_len = size - dest_len - 1;
    if (append_len > 0) {
        size_t i = 0;
        for (i; i < append_len && (src[i] != '\0'); i++)
            dest[dest_len + i] = src[i];
        dest[dest_len + i] = '\0';
    }
      
    return dest_len + src_len;
}