#include "my_library.h"

char* my_strtrim(char const *s){
    size_t len = my_strlen(s);
    size_t end = len - 1;
	size_t i = 0, empty = 0, k = 0, j = 0;

	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
		i++;
	if (s[i] == '\0')
		empty = i;
	while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n'){
		end--;
		i++;
	}
    empty += i;
    size_t trim_len = len - empty;
    char *new_str = my_strnew(trim_len);
    if (new_str == 0)
        return NULL;
    if ((s[k] == ' ' || s[k] == '\t' || s[k] == '\n') && s[k] != '\0')
        k++;
    else{
        new_str[j] = s[k];
        k++;
        j++;
    }
    return new_str;
}



/* Allocates (with malloc(3)) and returns a copy of the string given as argument without whitespaces at the beginning or the end of the string.
Whitespaces are ' ', '\n' and '\t'. If s has no whitespaces at the beginning or at the end, the function returns a copy of s. If the allocation fails the function return NULL
Param#1     The string to be trimmed. */