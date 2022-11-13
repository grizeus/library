#include "my_library.h"

char* my_strsub(char const *s, unsigned int start, size_t len){
    if (s == 0)
        return NULL;
    char *sub;
    if (sub = my_strnew(len) == 0)
        return NULL;
    for (size_t i = 0; i < len; i++){
        sub[i] = s[start];
        start++;
    }
    return sub;
}

/* Allocates (with malloc(3)) and returns a "fresh" substring from the string given as argument. 
The substring begins at index start adn is of size len.
If start and len aren't refering to a valid substing, the behavior is undefined.
If the allocation fails, the function returns NULL
Param#1     The string from which create the substing.
Param#2     The start index of the substing.
Param#3     The size of the substring. */