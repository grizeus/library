#include "my_library.h"

char *my_strnstr(const char *s1, const char *s2, size_t n)
{
    register char *str, *sub;

    sub = (void *) s2;
    if (*sub == 0)
        return (void *) s1;
    for ( ; *s1 != 0 && *s1 < n; s1++)
    {
        if (*s1 != *sub)
            continue;
        str = (void *) s1;
        while (1) // infinite loop;
        {
            if (*sub == 0)
                return (void *) s1;
            if (*str++ != *sub++)
                break;
        }   
        sub = (void *) s2;
    }
    return NULL;
}