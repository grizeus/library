#include "my_library.h"

int my_strnequ(char const *s1, char const *s2, size_t n){
    if (!s1 || !s2)
        return 0;
    for (size_t i = 0; i < n && s1[i] != '\0' && s2[i] != '\0'; i++){
        if (s1[i] != s2[i])
            return 0;
    }
    return 1;
}
        
        
        
/* 
Lexicographical comparison between s1 and s2 up to n characters or until a '\0' is reached. if the 2 strings are identical, the function return 1, or 0 otherwise.
Param#1     First string
Param#2     Second string
Param#4     The maximum number of characters to be compared. */