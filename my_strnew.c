#include "my_library.h"

char* my_strnew(size_t size){
    char* string = my_memalloc(size + 1);
    if (string == NULL)
        return NULL;
    return string;
}
        
        
        
/* Allocates (with malloc(3)) and return a "fresh" string ending with '\0'. Each character of the string is initialized at '\0'. 
If the allocation fails the function returns NULL.
Param#1:    The size of the string to be allocated
Return val: The string allocated and initialized to 0. */