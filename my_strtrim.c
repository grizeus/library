#include "my_library.h"

/// @brief Allocates (with malloc(3)) and returns a trimmed copy of the string given as argument
/// without whitespaces at the beginning or at the end of the string.
/// Will be considered as whitespaces the following characters ' ', '\n' and '\t'.
/// If s has no whitespaces at the beginning or at the end, the function returns a copy of s.
/// If the allocation fails the function returns NULL.
/// @param s The string to be trimmed
/// @return The trimmed string or NULL if the allocation fails.
char* my_strtrim(char const *s){
    // check for null
    if (s == NULL)
        return NULL;

    size_t end = 0, start = 0;

    // find start
	while ((s[start] == ' ' || s[start] == '\t' || s[start] == '\n') && s[start] != '\0')
		start++;
    
    // apply start to end
	end = start;

    while (s[end] != '\0')
        end++;

	while (end > start && (s[end - 1] == ' ' || s[end - 1] == '\t' || s[end - 1] == '\n'))
		end--;
	
    size_t trim_len = end - start;
    char* new_str = my_strnew(trim_len);
    // check for null
    if (new_str == NULL)
        return NULL;
    // copy trimmed string to new_str
    for (size_t i = 0; i < trim_len; i++)
        new_str[i] = s[start + i];
    // add null terminator
    new_str[trim_len] = '\0';

    return new_str;
}