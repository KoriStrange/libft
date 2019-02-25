
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
void	t_memset(char c);
void	t_bzero(char c);
//void	t_memcpy(void);
//void	t_memccpy(void);
//void	t_memmove(void);
//void	t_memchr(void);
//void	t_memcmp(void);
//void	t_strcat(void);
//void	t_strncat(void);
//void	t_strlcat(void);
//void	t_strchr(void);
//void	t_strrchr(void);
//void	t_strstr(void);
//void	t_strnstr(void);
void	t_isascii(char a, char b, char c);
void	t_isprint(char a, char b, char c);


#endif
