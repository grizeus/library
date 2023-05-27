#include "../include/my_library.h"

/// @brief Frees the memory space pointed to by str, then sets str to NULL.
/// @param str pointer to the pointer to the string to be freed
/// @return none
void my_strdel(char** str){
    if (str && *str){
		  free(*str);
		  *str = NULL;
    }
}
