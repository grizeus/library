#include "my_library.h"

int my_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}