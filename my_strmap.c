#include "my_library.h"

char* my_strmap(char const *s, char (*f)(char)){
    if (!s || !f)
		return (NULL);
    size_t len = my_strlen(s);
    char* map_string;
    if ((map_string = my_strnew(len)) == 0)
        return NULL;
    for (size_t i = 0; i < len; i++)
      map_string[i] = (*f)(s[i]);
    
    return map_string;
}






/* 
Applies the f to each character of the string given as argument to create a "fresh" new string (with malloc(3)) resulting from the successive applications of f.
Param#1     The string to map.
Param#2     The function to apply to each character of s.
Return val  The "fresh" string created from the successive applications of f. */