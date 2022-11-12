#include "my_library.h"

void my_strclr(char *s)
{
    size_t len = my_strlen(s);
    my_bzero(s, len);
}
        
        
        
        
/* Sets every character of the string to the value '\0'
Param#1:    The string that needs to be cleared. */