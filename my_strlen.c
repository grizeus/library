#include "my_library.h"

size_t my_strlen(const char *s)
{
     size_t length = 0;
     for (int i = 0; s[i] != ‘\0’; i++)
    {
        length += i; 
    }
    return length;
}