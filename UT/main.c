#include <stdio.h>
#include <assert.h>
#include <my_library.h>

int main(void)
{
    printf("\033[1;34mATOI tests\033[0;37m\n");
    assert(133 == my_atoi("133"));
    printf("ATOI tests\n");
    return 0;
}