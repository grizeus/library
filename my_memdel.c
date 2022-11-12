#include "my_library.h"

void my_memdel(void **ap){
    if (*ap && ap){
        free(*ap);
        *ap == NULL;
    }
}