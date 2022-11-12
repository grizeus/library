#include "my_library.h"

void my_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int len = my_strlen(s);
    for (unsigned int i = 0; i < len; i++)
        if (s[i] != '\0') ? s[i] = f(i, s[i]) : ;
}



/* Applies the function f to each character of the sting passed as argument, and passing its index as first argument. 
Each character is passed by address to f to be modified if necessary.
Param#1     The string to iterate.
Param#2     The function to apply to each character of s and its index. */