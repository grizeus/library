#include "my_library.h"

int my_strcmp(const char *s1, const char *s2)
{
    const unsigned char *ptr1 = (const unsigned char *) s1;
    const unsigned char *ptr2 = (const unsigned char *) s2;
    unsigned char uc1, uc2;
    do {
        uc1 = (unsigned char) *ptr1++;
        uc2 = (unsigned char) *ptr2++;
        if (uc1 == '\0')
	        return uc1 - uc2;
    }   while (uc1 == uc2);

    return uc1 - uc2;    
}