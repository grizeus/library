#include "my_library.h"

int my_isalnum(int c)
{
     int32_t length = my_strlen(int c);
     char *buff = c;
     for (int i = 0; i < length; i++)
     {
           if (my_isdigit(c[i]))
                continue;
     }
    else
            return 0;

     return 1;
}