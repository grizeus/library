#include "my_library.h"

void my_striter(char *s, void (*f)(char*))
{
    size_t len = my_strlen(s);
    for (size_t i = 0; i < len; i++)
        if (s[i] != '\0')
        {
            char *tmp = NULL;
            tmp = f(&s[i]);
            if (tmp != NULL)
                s[i] = *tmp;
        }
}
        
        
        
/* Applies the function f to each character of the string passed as argument. 
Each character is passed by address ot f to be modified if necessary
Param#1     The string to iterate.
Param#2     The function to apply to each character of s. */