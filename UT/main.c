#include <stdio.h>
#include "../my_library.h"

#include <stdlib.h>

static int failed = 0;

int test(int pass, const char* msg, const char* file, int line)
{
    if (pass)
        printf("\033[0;32m[%s] PASSED\033[0;37m\n", msg);
    else
        printf("\033[0;31m[%s] FAILED  in %s line %d\033[0;37m\n", msg, file, line);
    return pass;
}

#define TEST(EX) (void)(test (EX, #EX, __FILE__, __LINE__))

int main(void)
{
    printf("\033[1;34mATOI tests\033[0;37m\n");
    TEST(atoi("133") == my_atoi("133"));
    TEST(atoi("13") != my_atoi("133"));
    TEST(atoi(".42") == my_atoi(".42"));
    TEST(atoi("-42") == my_atoi("-42"));
    TEST(atoi("133  ") == my_atoi("133  "));
    TEST(atoi("  133") == my_atoi("  133"));
    TEST(atoi("133\n") == my_atoi("133\n"));
    TEST(atoi("133\r") == my_atoi("133\r"));
    TEST(atoi("\t133") == my_atoi("\t133"));
    TEST(atoi("10000000000000000000000000") == my_atoi("10000000000000000000000000"));
    printf("ATOI tests\n");
    {
    char* kek = my_memalloc(10);
        const char* lol = "12345555567";
        my_memccpy(kek, lol, '5', 10);
        printf("%s\n", kek);

    }
    if (!failed)    return 0;
    abort();
}