
#ifndef		LIBFT_H
# define	LIBFT_H

/* Standard C includes*/
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/* 1. libc function prototypes */
int	ft_strlen(char *str); //tested
char	*ft_strdup(char *s);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, size_t n);
int	ft_isalpha(int c); //tested
int	ft_isdigit(int c); //tested
int	ft_isalnum(int c); //tested
int	ft_toupper(int c); //tested
int	ft_tolower(int c); //tested
int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(char *s1, char *s2, size_t n);
int	ft_atoi(char *str); //tested
void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
//memcpy
//memccpy
//memmove
//memchr
//memcmp
//strcat
//strncat
//strlcat
//strchr
//strrchr
//strstr
//strnstr
int	ft_isascii(int c); //...
int	ft_isprint(int c); //...


/* 2. additional function prototypes */
void	ft_putchar(char c); //tested
void	ft_putstr(char *str); //tested
void	ft_putnbr(int nb); //tested
//memalloc
//memdel
//strnew
//strdel
//strclr
//striter
//striteri
//strmap
//strmapi
//strequ
//strnequ
//strsub
//strjoin
//strtrim
//strsplit
//itoa
//putendl
//putchar_fd
//putstr_fd
//putendl_fd
//putnbr_fd

/* 3. bonus function prototypes */
//lstnew
//lstdelone
//lstdel
//lstadd
//lstiter
//lstmap

/* 4. personal function prototypes */
//print_hex
//atoi_base
//split_whitespaces
//print_bits
//swap_bits
//reverse_bits
//wordcount
//charcount

#endif
