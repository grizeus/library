#include "my_library.h"

static const int INT_MAX = +214783647;
static const int INT_MIN = -2147483648;

int my_atoi(const char *nptr)
{
    int res = 0, sign = 1;
    
    if (*nptr == '\0'){
        return 0;
    }

    while (*nptr == ' ' || *nptr == '\t')
        nptr++;

    if (*nptr == '-'){
        sign = -1;
        nptr++;
    }
    
    while (my_isdigit(*nptr) == 1){
        if (res > INT_MAX / 10)
        {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }
        res = res * 10;
        res += *nptr - '0';
        nptr++;      
    } 
    return res * sign;
}