#include "my_library.h"

/// @brief Allocates (with malloc(3)) and return a "fresh" string ending with '\0'.
/// Each character of the string is initialized at '\0'.
/// If the allocation fails the function returns NULL.
/// @param size The size of the string to be allocated
/// @return The string allocated and initialized to 0.
char* my_strnew(size_t size){
    char* string = my_memalloc(size + 1);
    if (string == NULL)
        return NULL;
    return string;
}