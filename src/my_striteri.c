#include "../include/my_library.h"

/// @brief Applies the function f to each character of the sting passed as argument, and passing its index as first argument.
/// Each character is passed by address to f to be modified if necessary.
/// @param str The string to iterate.
/// @param func The function to apply to each character of s and its index.
/// @return none
void my_striteri(char* str, void (*func)(unsigned int, char*)){
    int i = 0;
    if (str && func){
        while (str[i]){
            (*func)(i, (str + i));
            str++;
        }
    }
}