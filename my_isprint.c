#include "my_library.h"

int my_isprint(int c)
{
    if ((c >= 0x20) && (c <= 0x7e))
        return 1;
    return 0;
}