#include <stdio.h>
#include "../my_library.h"

#include <stdlib.h>
#include <ctype.h>

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

void foo(char* bar)
{
    printf("FROM foo() %s\n", bar);
}

void bar(unsigned int i, char* str)
{
    if (i % 2 == 0)
        *str = ' ';
}

char encode(char c)
{
    return c + 1;
}

int main(void)
{
    printf("\033[1;34mATOI tests\033[0;37m\n");
    TEST(atoi("133") == my_atoi("133"));
    TEST(atoi("") == my_atoi(""));
    TEST(atoi("13") != my_atoi("133"));
    TEST(atoi(".42") == my_atoi(".42"));
    TEST(atoi("-42") == my_atoi("-42"));
    TEST(atoi("  -42") == my_atoi("  -42"));
    TEST(atoi("- 42") == my_atoi("- 42"));
    TEST(atoi("133  ") == my_atoi("133  "));
    TEST(atoi("  133") == my_atoi("  133"));
    TEST(atoi("133\n") == my_atoi("133\n"));
    TEST(atoi("133\r") == my_atoi("133\r"));
    TEST(atoi("\t133") == my_atoi("\t133"));
    TEST(atoi("10000000000000000000000000") == my_atoi("10000000000000000000000000"));
    printf("%d\n", atoi("- 42"));
    printf("ATOI tests\n");

    {
        TEST(isprint('\t') == my_isprint('\t'));

        char* kek = my_memalloc(10);
        const char* lol = "12345555567";
        my_memccpy(kek, lol, '5', 10);
        printf("%s\n", kek);

        char* ptr;
        ptr = NULL;

        TEST((my_strcmp("123", "321") < 0) == (strcmp("123", "321") < 0));
        TEST((my_strcmp("723", "321") > 0) == (strcmp("723", "321") > 0));
        TEST((my_strcmp("125", "123") > 0) == (strcmp("125", "123") > 0));
        TEST((my_strcmp("123", "123") == 0) == (strcmp("123", "123") == 0));

        printf("%s\n", my_strdup("kek"));

        char * evens = my_strdup("every even is space!");
        my_striteri(evens, bar);
        printf("%s\n", evens);
    }

    {
        char* str1 = malloc(sizeof(char) * 20);
        memcpy(str1, "Kek is", 6);
        char* str2 = my_strdup("life is bullshit");
        int res = my_strlcat(str1, str2, 4);
        printf("%s %d\n", str1, res);
    }

    {
        const char* syphred = my_strmap("You can't read this!", encode);
        printf("%s\n", syphred);
    }

    {
        const char* str1 = my_strdup("There is a needle in a histack!");
        const char* str2 = my_strdup("needle");
        // char* ptr = malloc(sizeof(char) * 100);
        char* ptr = my_memalloc(100 * sizeof(char));
        ptr = my_strnstr(str1, str2, 15);
        printf("%s\n", ptr);
    }

    
    if (!failed)    return 0;
    abort();
}