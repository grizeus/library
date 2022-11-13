#include "my_library.h"

int my_strequ(char const *s1, char const *s2){
    if (!s1 || !s2)
        return 0;
    size_t len_1 = my_strlen(s1);
    if (len_1 != my_strlen(s2))
        return 0;
    for (size_t i = 0; i < len_1; i++){
        if (s1[i] != s2[i])
            return 0;
    }
    return 1;
}



Lexicographical comparison between s1 and s2. If the 2 strings are identical function returns 1, 
or 0 otherwise.
Param#1     The first string
Param#2     The second string.
Return val  1 or 0 according to if the 2 strings are identical or not.