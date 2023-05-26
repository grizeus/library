#include "my_library.h"

/// @brief Applies the function func to each character of the string passed as argument to create a "fresh" new string (with malloc(3)) resulting from the successive applications of func.
/// @param str The string to map.
/// @param func The function to apply to each character of str.
/// @return The "fresh" string created from the successive applications of func.
char* my_strmap(char const* str, char (*func)(char)){
    if (!str || !func)
		    return NULL;

    size_t len = my_strlen(s);
    // allocate memory for the new string
    char* map_string = my_strnew(len);

    if (map_string != NULL) {
        for (size_t i = 0; i < len; i++)
            map_string[i] = (*func)(str[i]);
    }
    
    return map_string;
}