#include "my_library.h"

char *my_strstr(const char *haystack, const char *needle)
{
    register char *str, *sub;

    sub = (void *) needle;
    if (*sub == 0)
        return (void *) haystack;
    for ( ; *haystack != 0; haystack++)
    {
        if (*haystack != *sub)
            continue;
        str = (void *) haystack;
        while (1) // infinite loop;
        {
            if (*sub == 0)
                return (void *) haystack;
            if (*str++ != *sub++)
                break;
        }   
        sub = (void *) needle;
    }
    return NULL;
}