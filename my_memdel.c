#include "my_library.h"

void my_memdel(void **ap)
{
    unsigned char** tmp = (unsigned char**) ap;
    free(*ap);
    *tmp == NULL; 
}