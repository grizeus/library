#include "my_library.h"

/// @brief Calculates the length of the string pointed to by s, excluding the terminating null byte ('\0').
/// @param s pointer to the string to be measured
/// @return the number of bytes (chars) in the string pointed to by s.
size_t my_strlen(const char* s) {
   // set pointer to start of string
   const char *ptr = s;
     
   // loop until end of string
   while ( *ptr )
      ++ptr;
   // return the number of char in the string
    return ptr - s;
}