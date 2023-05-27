#include "../include/my_library.h"

/// @brief Lexicographical comparison between s1 and s2 up to n characters or until a '\0' is reached.
/// If the 2 strings are identical, the function return 1, or 0 otherwise.
/// @param s1 First string
/// @param s2 Second string
/// @param n The maximum number of characters to be compared.
/// @return 1 if the 2 strings are identical, 0 otherwise.
int my_strnequ(char const *s1, char const *s2, size_t n){
    while (n > 0 && *s1 && *s2 && (*s1 == *s2)) {
        s1++;
        s2++;
        n--;
    }

    return (n == 0 || (*s1 == '\0' && *s2 == '\0'));
}
        
        
        
/* 
Lexicographical comparison between s1 and s2 up to n characters or until a '\0' is reached. if the 2 strings are identical, the function return 1, or 0 otherwise.
Param#1     First string
Param#2     Second string
Param#4     The maximum number of characters to be compared. */