 #include "my_library.h"

/// @brief Copies the string pointed to by src, including the terminating null byte ('\0'), to the buffer pointed to by dest.
/// @param dest pointer to the destination array where the content is to be copied
/// @param src pointer to the source of data to be copied
/// @return pointer to dest.
char* my_strcpy(char *dest, const char *src) {
    int len = my_strlen(src);
    my_memcpy(dest, src, len);
    return dest;
}