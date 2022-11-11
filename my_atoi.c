#include "my_library.h"

int my_atoi(const char *nptr)
{
    int res = 0, sign = 1;
    
    if (*nptr == '\0'){
        return 0;
    }

    if (*nptr == '-'){
        sign = -1;
        nptr++;
    }
    if (*nptr == '\t'){
        nptr++;
    }

    while (*nptr == ' ')
        nptr++;
    
    while (my_isdigit(*nptr) == 1){
        res = res * 10;
        res += *nptr - '0';
        nptr++;      
    } 
    return res * sign;
}