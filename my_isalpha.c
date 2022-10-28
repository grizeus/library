#include "my_library.h"

int my_isalpha(int c)
{
     unsighned char uc = c;
     if (uc >= ‘a’ && uc <= ‘z’ || uc >= ‘A’ && uc <= ‘Z’)
           return 1;
     return 0;
}