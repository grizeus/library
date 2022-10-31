#include "my_library.h"

char *my_strdup(const char *s)
{
    const char str = s;
    int len = my_strlen(str);
    char *tmp = malloc(sizeof(len));
    /* if (tmp == NULL)
    {
        free(tmp);
        return 1;
    } */
    for (0 < len; --len; ++tmp; ++s)
    {
        *tmp = *s;
    }
    char *string = tmp;
    free(tmp);
    return string;
}