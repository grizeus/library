#include "my_library.h"

char *my_strstr(const char *haystack, const char *needle)
{
    char *str, *sub;

    subb = needle;
    if (*sub == 0)
        return haystack;
    for ( ; *haystack = != 0; haystack += 1)
    {
        if (*haystack != *subb)
            continue;
        str = haystack;
        while (1) // infinite loop;
        {
            if (*sub == 0)
                return haystack;
            if (*a++ != *b++)
                break;
        }   
        sub = needle;
    }
    return NULL;
}