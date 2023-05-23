#include "my_library.h"

/// @brief Frees the memory space pointed to by ptr, then sets ptr to NULL.
/// @param ptr
void my_memdel(void** ptr) {
    if (ptr && *ptr) {
        free(*ptr);
        *ptr == NULL;
    }
}