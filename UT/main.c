#include <stdio.h>
#include "../include/my_library.h"

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

void print_index(unsigned int index, char* c);

void print_char(char* ch) {
    printf("%c ", *ch);
}

int main(void)
{
    printf("\033[1;34mATOI tests\033[0;37m\n");
    TEST(atoi("133") == my_atoi("133"));
    TEST(atoi("13") != my_atoi("133"));
    TEST(atoi(".42") == my_atoi(".42"));
    TEST(atoi("-42") == my_atoi("-42"));
    TEST(atoi("133  ") == my_atoi("133  "));
    TEST(atoi("  m1dn1ght") == my_atoi("  m1dn1ght"));
    TEST(atoi("  133") == my_atoi("  133"));
    TEST(atoi("133\n") == my_atoi("133\n"));
    TEST(atoi("133\r") == my_atoi("133\r"));
    TEST(atoi("\t133") == my_atoi("\t133"));
    // TEST(atoi("10000000000000000000000000") == my_atoi("10000000000000000000000000")); // undifined behaviour

    printf("ATOI tests\n");

    printf("\033[1;34mISDIGIT tests\033[0;37m\n");
    TEST(isdigit('1') == my_isdigit('1'));
    TEST(isdigit('0') == my_isdigit('0'));
    TEST(isdigit('g') == my_isdigit('g'));
    TEST(isdigit(' ') == my_isdigit(' '));
    TEST(isdigit('\t') == my_isdigit('\t'));
    TEST(isdigit('\n') == my_isdigit('\n'));
    TEST(isdigit('\r') == my_isdigit('\r'));

    printf("ISDIGIT tests\n");

    printf("\033[1;34mISALNUM tests\033[0;37m\n");
    TEST(isalnum('1') == my_isalnum('1'));
    TEST(isalnum('a') == my_isalnum('a'));
    TEST(isalnum('A') == my_isalnum('A'));
    TEST(isalnum('z') == my_isalnum('z'));
    TEST(isalnum('p') == my_isalnum('p'));
    TEST(isalnum('Z') == my_isalnum('Z'));
    TEST(isalnum('0') == my_isalnum('0'));
    TEST(isalnum('9') == my_isalnum('9'));
    TEST(isalnum(' ') == my_isalnum(' '));
    TEST(isalnum('\t') == my_isalnum('\t'));
    TEST(isalnum('\n') == my_isalnum('\n'));
    TEST(isalnum('\r') == my_isalnum('\r'));
    TEST(isalnum('\v') == my_isalnum('\v'));
    TEST(isalnum('\b') == my_isalnum('\b'));
    TEST(isalnum('\f') == my_isalnum('\f'));
    TEST(isalnum('!') == my_isalnum('!'));
    TEST(isalnum('@') == my_isalnum('@'));
    TEST(isalnum('#') == my_isalnum('#'));
    TEST(isalnum('$') == my_isalnum('$'));
    TEST(isalnum('%') == my_isalnum('%'));
    TEST(isalnum('^') == my_isalnum('^'));
    TEST(isalnum('&') == my_isalnum('&'));

    printf("ISALNUM tests\n");

    printf("\033[1;34mISALPHA tests\033[0;37m\n");
    TEST(isalpha('a') == my_isalpha('a'));
    TEST(isalpha('A') == my_isalpha('A'));
    TEST(isalpha('z') == my_isalpha('z'));
    TEST(isalpha('Z') == my_isalpha('Z'));
    TEST(isalpha('1') == my_isalpha('1'));
    TEST(isalpha('0') == my_isalpha('0'));
    TEST(isalpha(' ') == my_isalpha(' '));
    TEST(isalpha('\t') == my_isalpha('\t'));
    TEST(isalpha('\n') == my_isalpha('\n'));
    TEST(isalpha('\r') == my_isalpha('\r'));
    TEST(isalpha('\v') == my_isalpha('\v'));
    TEST(isalpha('\b') == my_isalpha('\b'));

    printf("ISALPHA tests\n");

    printf("\033[1;34mSTRLEN tests\033[0;37m\n");
    TEST(strlen("kek") == my_strlen("kek"));
    TEST(strlen("kek") != my_strlen("ke"));
    TEST(strlen("kek") != my_strlen("kekk"));
    TEST(strlen("   ") == my_strlen("   "));
    TEST(strlen("  kek  ") == my_strlen("  kek  "));
    TEST(my_strlen("keklol") == my_strlen("  kek "));

    printf("STRLEN tests\n");

    printf("\033[1;34mBZERO tests\033[0;37m\n");
    {
        char* str = my_strdup("kek");
        bzero(str, 3);
        TEST(str[0] == 0);
        TEST(str[1] == 0);
        TEST(str[2] == 0);
        free(str);
    }

    printf("BZERO tests\n");

    printf("\033[1;34mMEMSET tests\033[0;37m\n");
    {
        char* str = my_strdup("kek");
        memset(str, 'a', 3);
        TEST(str[0] == 'a');
        TEST(str[1] == 'a');
        TEST(str[2] == 'a');
        free(str);
    }

    printf("MEMSET tests\n");

    printf("\033[1;34mMEMCPY tests\033[0;37m\n");
    {
        char* str1 = my_strdup("kek");
        char* str2 = my_strdup("lol");
        memcpy(str1, str2, 3);
        TEST(str1[0] == 'l');
        TEST(str1[1] == 'o');
        TEST(str1[2] == 'l');
        free(str1);
        free(str2);
    }

    printf("MEMCPY tests\n");

    printf("\033[1;34mMEMMOVE tests\033[0;37m\n");
    {
        char* str1 = my_strdup("kek");
        char* str2 = my_strdup("lol");
        memmove(str1, str2, 3);
        TEST(str1[0] == 'l');
        TEST(str1[1] == 'o');
        TEST(str1[2] == 'l');
        free(str1);
        free(str2);
    }

    printf("MEMMOVE tests\n");

    printf("\033[1;34mMEMCCPY tests\033[0;37m\n");
    {
        char* str1 = my_strdup("kek");
        char* str2 = my_strdup("lol");
        my_memccpy(str1, str2, 'o', 3);
        TEST(str1[0] == 'l');
        TEST(str1[1] == 'o');
        TEST(str1[2] != 'l');
        free(str1);
        free(str2);
    }

    printf("MEMCCPY tests\n");

    printf("\033[1;34mMEMCHR tests\033[0;37m\n");
    {
        char* str = my_strdup("kek");
        char* res = memchr(str, 'e', 3);
        TEST(res == str + 1);
        free(str);
    }

    printf("MEMCHR tests\n");

    printf("\033[1;34mMEMCMP tests\033[0;37m\n");
    {
        char* str1 = my_strdup("kek");
        char* str2 = my_strdup("lol");
        int res = memcmp(str1, str2, 3);
        TEST(res == -1);
        free(str1);
        free(str2);
    }

    printf("MEMCMP tests\n");

    printf("\033[1;34mSTRDUP tests\033[0;37m\n");
    {
        char* str = my_strdup("kek");
        TEST(str[0] == 'k');
        TEST(str[1] == 'e');
        TEST(str[2] == 'k');
        free(str);
    }

    printf("STRDUP tests\n");

    printf("\033[1;34mSTRCPY tests\033[0;37m\n");
    {
        char* str1 = my_strdup("kek");
        char* str2 = my_strdup("lol");
        my_strcpy(str1, str2);
        TEST(str1[0] == 'l');
        TEST(str1[1] == 'o');
        TEST(str1[2] == 'l');
        free(str1);
        free(str2);
    }

    printf("STRCPY tests\n");

    printf("\033[1;34mSTRNCPY tests\033[0;37m\n");
    {
        char* str1 = my_strdup("kek");
        char* str2 = my_strdup("lol");
        my_strncpy(str1, str2, 3);
        TEST(str1[0] == 'l');
        TEST(str1[1] == 'o');
        TEST(str1[2] == 'l');
        free(str1);
        free(str2);
    }

    printf("STRNCPY tests\n");

    printf("\033[1;34mSTRCAT tests\033[0;37m\n");
    {
        char str1[7] = "kek";
        char* str2 = my_strdup("lol");
        my_strcat(str1, str2);
        TEST(str1[0] == 'k');
        TEST(str1[1] == 'e');
        TEST(str1[2] == 'k');
        TEST(str1[3] == 'l');
        TEST(str1[4] == 'o');
        TEST(str1[5] == 'l');
        free(str2);
    }

    printf("STRCAT tests\n");

    printf("\033[1;34mSTRNCAT tests\033[0;37m\n");
    {
        char str1[7] = "kek";
        char* str2 = my_strdup("lol");
        my_strncat(str1, str2, 3);
        TEST(str1[0] == 'k');
        TEST(str1[1] == 'e');
        TEST(str1[2] == 'k');
        TEST(str1[3] == 'l');
        TEST(str1[4] == 'o');
        TEST(str1[5] == 'l');
        free(str2);
    }

    printf("STRNCAT tests\n");

    printf("\033[1;34mSTRCHR tests\033[0;37m\n");
    {
        char* str = my_strdup("kekeke");
        char* res = my_strchr(str, 'e');
        TEST(res == str + 1);
        free(str);
    }

    printf("STRCHR tests\n");

    printf("\033[1;34mSTRRCHR tests\033[0;37m\n");
    {
        char* str = my_strdup("kekeke");
        char* res = my_strrchr(str, 'e');
        TEST(res == str + 5);
        free(str);
    }

    printf("STRRCHR tests\n");

    printf("\033[1;34mSTRSTR tests\033[0;37m\n");
    {
        char* str1 = my_strdup("kek");
        char* str2 = my_strdup("lol");
        char* res = my_strstr(str1, str2);
        TEST(res == NULL);
        free(str1);
        free(str2);
    }

    printf("STRSTR tests\n");

    printf("\033[1;34mSTRNCMP tests\033[0;37m\n");
    {
        char* str1 = my_strdup("kek");
        char* str2 = my_strdup("lol");
        int res = my_strncmp(str1, str2, 3);
        TEST(res == -1);
        free(str1);
        free(str2);
    }

    printf("STRNCMP tests\n");

    printf("\033[1;34mSTRCMP tests\033[0;37m\n");
    {
        char* str1 = my_strdup("kek");
        char* str2 = my_strdup("lol");
        int res = my_strcmp(str1, str2);
        TEST(res == -1);
        free(str1);
        free(str2);
    }

    printf("STRCMP tests\n");

    printf("\033[1;34mSTRNSTR tests\033[0;37m\n");
    {
        char* str1 = my_strdup("kek");
        char* str2 = my_strdup("lol");
        char* res = my_strnstr(str1, str2, 3);
        TEST(res == NULL);
        free(str1);
        free(str2);
    }

    printf("STRNSTR tests\n");

    printf("\033[1;34mSTRNEW tests\033[0;37m\n");
    {
        char* str = my_strnew(3);
        TEST(str[0] == 0);
        TEST(str[1] == 0);
        TEST(str[2] == 0);
        free(str);
    }

    printf("STRNEW tests\n");

    printf("\033[1;34mSTRCLR tests\033[0;37m\n");
    {
        char* str = my_strdup("kek");
        my_strclr(str);
        TEST(str[0] == 0);
        TEST(str[1] == 0);
        TEST(str[2] == 0);
        free(str);
    }

    printf("STRCLR tests\n");

    printf("\033[1;34mSTRITER tests\033[0;37m\n");
    {
        char* str = "keks";
        my_striter(str, print_char);
        printf("\n");
        
    }

    printf("STRITER tests\n");

    printf("\033[1;34mSTRITERI tests\033[0;37m\n");
    {
        char* str = my_strdup("kek");
        my_striteri(str, &print_index);
        free(str);
    }

    printf("STRITERI tests\n");

    printf("\033[1;34mSTRMAP tests\033[0;37m\n");
    {
        // recast function pointer to void* and then to void (*)(char *)
        int (*funcPtr)(int) = &my_toupper;
        char (*newFuncPtr)(char) = (char (*)(char))funcPtr;
        char* str = my_strdup("kek");
        char* res = my_strmap(str, newFuncPtr);
        TEST(res[0] == 'K');
        TEST(res[1] == 'E');
        TEST(res[2] == 'K');
        free(str);
        free(res);
    }

    printf("STRMAP tests\n");

    printf("\033[1;34mSTREQU tests\033[0;37m\n");
    {
        char* str1 = my_strdup("kek");
        char* str2 = my_strdup("kek");
        int res = my_strequ(str1, str2);
        TEST(res == 1);
        free(str1);
        free(str2);
    }

    printf("STREQU tests\n");

    printf("\033[1;34mSTRNEQU tests\033[0;37m\n");
    {
        char* str1 = my_strdup("kek");
        char* str2 = my_strdup("kek");
        int res = my_strnequ(str1, str2, 3);
        TEST(res == 1);
        free(str1);
        free(str2);
    }

    printf("STRNEQU tests\n");

    printf("\033[1;34mSTRSUB tests\033[0;37m\n");
    {
        char* str = my_strdup("kek");
        char* res = my_strsub(str, 1, 2);
        TEST(res[0] == 'e');
        TEST(res[1] == 'k');
        free(str);
        free(res);
    }

    printf("STRSUB tests\n");

    printf("\033[1;34mSTRTRIM tests\033[0;37m\n");
    {
        char* str = my_strdup("  kek  ");
        char* res = my_strtrim(str);
        TEST(res[0] == 'k');
        TEST(res[1] == 'e');
        TEST(res[2] == 'k');
        free(str);
        free(res);
    }

    printf("STRTRIM tests\n");

    printf("\033[1;34mISASCII tests\033[0;37m\n");
    TEST(isascii('a') == my_isascii('a'));
    TEST(isascii('A') == my_isascii('A'));
    TEST(isascii('z') == my_isascii('z'));
    TEST(isascii('Z') == my_isascii('Z'));
    TEST(isascii('1') == my_isascii('1'));
    TEST(isascii('0') == my_isascii('0'));
    TEST(isascii(' ') == my_isascii(' '));
    TEST(isascii('\t') == my_isascii('\t'));
    TEST(isascii('\n') == my_isascii('\n'));
    TEST(isascii('\r') == my_isascii('\r'));
    TEST(isascii('\v') == my_isascii('\v'));
    TEST(isascii('\b') == my_isascii('\b'));
    TEST(isascii('\f') == my_isascii('\f'));
    TEST(isascii('!') == my_isascii('!'));
    TEST(isascii('@') == my_isascii('@'));
    TEST(isascii('#') == my_isascii('#'));
    TEST(isascii('$') == my_isascii('$'));
    TEST(isascii('%') == my_isascii('%'));
    TEST(isascii('^') == my_isascii('^'));
    TEST(isascii('&') == my_isascii('&'));

    printf("ISASCII tests\n");

    printf("\033[1;34mTOUPPER tests\033[0;37m\n");
    TEST(toupper('a') == my_toupper('a'));
    TEST(toupper('A') == my_toupper('A'));
    TEST(toupper('z') == my_toupper('z'));
    TEST(toupper('Z') == my_toupper('Z'));
    TEST(toupper('1') == my_toupper('1'));
    TEST(toupper('0') == my_toupper('0'));
    TEST(toupper(' ') == my_toupper(' '));
    TEST(toupper('\t') == my_toupper('\t'));
    TEST(toupper('\n') == my_toupper('\n'));
    TEST(toupper('\r') == my_toupper('\r'));
    TEST(toupper('\v') == my_toupper('\v'));

    printf("TOUPPER tests\n");

    printf("\033[1;34mTOLOWER tests\033[0;37m\n");
    TEST(tolower('a') == my_tolower('a'));
    TEST(tolower('A') == my_tolower('A'));
    TEST(tolower('z') == my_tolower('z'));
    TEST(tolower('Z') == my_tolower('Z'));
    TEST(tolower('1') == my_tolower('1'));
    TEST(tolower('0') == my_tolower('0'));
    TEST(tolower(' ') == my_tolower(' '));
    TEST(tolower('\t') == my_tolower('\t'));
    TEST(tolower('\n') == my_tolower('\n'));
    TEST(tolower('\r') == my_tolower('\r'));
    TEST(tolower('\v') == my_tolower('\v'));

    printf("TOLOWER tests\n");

    printf("\033[1;34mISPRINT tests\033[0;37m\n");
    TEST(isprint('a') == my_isprint('a'));
    TEST(isprint('A') == my_isprint('A'));
    TEST(isprint('z') == my_isprint('z'));
    TEST(isprint('Z') == my_isprint('Z'));
    TEST(isprint('1') == my_isprint('1'));
    TEST(isprint('0') == my_isprint('0'));
    TEST(isprint(' ') == my_isprint(' '));
    TEST(isprint('\t') == my_isprint('\t'));
    TEST(isprint('\n') == my_isprint('\n'));
    TEST(isprint('\r') == my_isprint('\r'));
    TEST(isprint('\v') == my_isprint('\v'));
    TEST(isprint('\b') == my_isprint('\b'));
    TEST(isprint('\f') == my_isprint('\f'));
    TEST(isprint('!') == my_isprint('!'));
    TEST(isprint('@') == my_isprint('@'));
    TEST(isprint('#') == my_isprint('#'));
    TEST(isprint('$') == my_isprint('$'));
    TEST(isprint('%') == my_isprint('%'));
    TEST(isprint('^') == my_isprint('^'));
    TEST(isprint('&') == my_isprint('&'));

    printf("ISPRINT tests\n");

    printf("\033[1;34mMEMALLOC tests\033[0;37m\n");
    {
        char* str = my_memalloc(3);
        TEST(str[0] == 0);
        TEST(str[1] == 0);
        TEST(str[2] == 0);
        free(str);
    }

    printf("MEMALLOC tests\n");

    printf("\033[1;34mMEMDEL tests\033[0;37m\n");
    {
        char* str = my_memalloc(3);
        void* ptr = str;
        my_memdel(ptr);
        TEST(str == NULL);
    }

    printf("MEMDEL tests\n");

    printf("\033[1;34mSTRDEL tests\033[0;37m\n");
    {
        char* str = my_strdup("kek");
        my_strdel(&str);
        TEST(str == NULL);
    }

    printf("STRDEL tests\n");


    
    
    {
         TEST(isprint('\t') == my_isprint('\t'));

        char* kek = my_memalloc(10);
        const char* lol = "12345555567";
        my_memccpy(kek, lol, '5', 10);
        printf("%s\n", kek);
        free(kek);
    }

    {
        char* str1 = my_memalloc(sizeof(char) * 20);
        memcpy(str1, "Kek is", 6);
        char* str2 = my_strdup("life is bullshit");
        int res = my_strlcat(str1, str2, 4);
        printf("%s %d\n", str2, res);
        free(str1);
        free(str2);
    }

    if (!failed)    return 0;
    abort();
}

void print_index(unsigned int index, char* c){
    printf("index: %d, char: %c\n", index, *c);
}