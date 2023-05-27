#include "../include/my_library.h"

/// @brief Applies the function func to each character of the string passed as argument.
/// Each character is passed by address to f to be modified if necessary
/// @param str The string to iterate.
/// @param func The function to apply to each character of s.
/// @return none
void my_striter(char *str, void (*func)(char*)){
    if (str && func){
        while (*str != '\0'){
            func(str);
            str++;
        } 
    }
}