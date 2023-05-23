#ifndef MYLIBRARY_H_INCLUDED
#define MYLIBRARY_H_INCLUDED

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
int my_atoi(const char*);
int my_isascii(int c);
char *my_strncpy(char *dest, const char *src, size_t n);
char *my_strcat(char *dest, const char *src);
char *my_strncat(char *dest, const char *src, size_t n);
size_t my_strlcat (char *dst, const char *src, size_t size);
char *my_strchr(const char *s, int c);
char *my_strrchr(const char *s, int c);
char *my_strstr(const char *haystack, const char *needle);
char *my_strnstr(const char *s1, const char *s2, size_t n);
int my_strcmp(const char *s1, const char *s2);
int my_strncmp(const char *s1, const char *s2, size_t n);
int my_isprint(int c);
int my_toupper(int c);
int my_tolower(int c);
void* my_memalloc(size_t size);
void my_memdel(void **ap);
char* my_strnew(size_t size);
void my_strdel(char **as);
void my_strclr(char *s);
void my_striter(char *s, void (*f)(char*));
void my_striteri(char *s, void (*f)(unsigned int, char*));
char* my_strmap(char const *s, char (*f)(char));
int my_strequ(char const *s1, char const *s2);
int my_strnequ(char const *s1, char const *s2, size_t n);
char* my_strsub(char const *s, unsigned int start, size_t len);
char* my_strtrim(char const *s);
#endif // MYLIBRARY_H_INCLUDED