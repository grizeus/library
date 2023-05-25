#include "my_library.h"

/// @brief Frees the memory space pointed to by ptr, then sets ptr to NULL.
/// @param ptr pointer to the pointer to the memory area to be freed
/// @return none
void my_memdel(void** ptr) {
    if (ptr && *ptr) {
        free(*ptr);
        *ptr == NULL;
    }
}