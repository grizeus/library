#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int my_isdigit(int c);
void *my_memset (void *s, int c, size_t n);
int my_isalnum(int c);
int my_isalpha(int c);
size_t my_strlen(const char *s);
void my_bzero(void *s, size_t n);
void *my_memcpy(void *dest, const void *src, size_t n);
void *my_memmove(void *dest, const void *src, size_t n);
void *my_memccpy(void *dest, const void *src, int c, size_t n);
void *my_memchr(const void *s, int c, size_t n);
int my_memcmp(const void *s1, const void *s2, size_t n);
char *my_strdup(const char *s);
char *my_strcpy(char *dest, const char *src);