
#ifndef		LIBTEST_H
# define	LIBTEST_H

#include "../libft.h"

/* 1. libc test-function prototypes */
void	t_strlen(char *s);
void	t_strdup(char *s);
void	t_strcpy(char *s);
void	t_strncpy(char *s, size_t n);
void	t_isalpha(char a, char b, char c);
void	t_isdigit(char a, char b, char c);
void	t_isalnum(char a, char b, char c);
void	t_toupper(char *s);
void	t_tolower(char *s);
void	t_strcmp(char *s, char *t);
void	t_strncmp(char *s, char *t, size_t n);
void	t_atoi(char *s);
void	t_memset(char c, size_t n);
void	t_bzero(size_t n);
//void	t_memcpy(void);
//void	t_memccpy(void);
//void	t_memmove(void);
//void	t_memchr(void);
//void	t_memcmp(void);
void	t_strcat(char *s, char *t);
void	t_strncat(char *s, char *t, size_t n);
//void	t_strlcat(void);
void	t_strchr(char *s, char a);
void	t_strrchr(char *s, char a);
void	t_strstr(char *s, char *f);
void	t_strnstr(char *s, char *f, size_t n);
void	t_isascii(char a, char b, char c);
void	t_isprint(char a, char b, char c);


#endif
