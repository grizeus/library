#include "my_library.h"

/// @brief Allocates sufficient memory for a copy of the string str, does the copy, and returns a pointer to it.
/// @param str pointer to the string to be copied
/// @return pointer to the allocated memory area or NULL if insufficient memory was available
char* my_strdup(const char* str) {
    size_t len = my_strlen(str);
    char* new_str = my_memalloc(len + 1);
    if (new_str == NULL)
        return NULL;
    my_memcpy(new_str, str, len);
    return new_str;
}