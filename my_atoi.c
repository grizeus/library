#include "my_library.h"

int my_atoi(const char *nptr)
{
    int integer = 0;
    for (int i = 0; nptr[i] != '\0'; ++i)
        integer = 10 * integer + nptr[i] - '0';

    return integer;
}