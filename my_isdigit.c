#include <ctype.h>
#include "my_library.h"

int my_isdigit(int c)
{
     unsighned char uc = c;
     if (uc >= 0 && uc <= 9)
           return 1;
     return 0;
}