#include "my_library.h"

int my_atoi(const char *nptr)
{
    char *ptr = NULL;
    int integer = 0;
    int len = my_strlen(nptr);
    for (int i = 0; i < len; i++)
    {
        if (my_isdigit(nptr[i]))
            ptr[i] = nptr[i];
        else
            break;
    }
    for (int i = 0; i < len; i++)
        integer = 10 * integer + ptr[i];
    return integer;
}