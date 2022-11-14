#include "my_library.h"

void my_striteri(char *s, void (*f)(unsigned int, char*)){
    int i = 0;
    if (s && f){
        while (s[i]){
            (*f)(i, (s + i));
            ++i;
        } 
    }  
}



/* Applies the function f to each character of the sting passed as argument, and passing its index as first argument. 
Each character is passed by address to f to be modified if necessary.
Param#1     The string to iterate.
Param#2     The function to apply to each character of s and its index. */