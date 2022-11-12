#include "my_library.h"

void my_strdel(char **as){
    my_memdel((char)as);
}





/* Takes as a parameter the address of a string that need to be freed with free(3), then sets its pointer to NULL
Param#1:    The string's address */