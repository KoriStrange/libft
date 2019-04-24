
#ifndef		LIBFT_H
# define	LIBFT_H

/* Standard C includes*/
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/* 1. libc function prototypes */
int	ft_strlen(char *str); //tested
char	*ft_strdup(char *s); //tested
char	*ft_strcpy(char *dest, char *src); //tested
char	*ft_strncpy(char *dest, char *src, size_t n); //tested
int	ft_isalpha(int c); //tested
int	ft_isdigit(int c); //tested
int	ft_isalnum(int c); //tested
int	ft_toupper(int c); //tested
int	ft_tolower(int c); //tested
int	ft_strcmp(char *s1, char *s2); //tested
int	ft_strncmp(char *s1, char *s2, size_t n); //tested
int	ft_atoi(char *str); //tested
void	*ft_memset(void *s, int c, size_t n); //tested
void	*ft_bzero(void *s, size_t n); //tested
void	*ft_memcpy(void *dest, void *src, size_t n);
void	*ft_memccpy(void *dest, void *src, int c, size_t n);
void	*ft_memmove(void *dest, void *src, size_t n);
void	*ft_memchr(void *s, int c, size_t n);
int	ft_memcmp(void *s1, void *s2, size_t n);
char	*ft_strcat(char *dest, char *src); //tested
char	*ft_strncat(char *dest, char *src, size_t n); //tested
size_t	ft_strlcat(char *dest, char *src, size_t n);
char	*ft_strchr(char *s, int c); //tested
char	*ft_strrchr(char *s, int c); //tested
char	*ft_strstr(char *h, char *n); //tested
char	*ft_strnstr(char *h, char *n, size_t a); //tested
int	ft_isascii(int c); //tested
int	ft_isprint(int c); //tested


/* 2. additional function prototypes */
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char *s, char (*f)(char));
char	*ft_strmapi(char *s, char (*f)(unsigned int, char));
int	ft_strequ(char *s1, char *s2);
int	ft_strnequ(char *s1, char *s2, size_t n);
char	*ft_strsub(char *s, unsigned int start, size_t len);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strtrim(char *s);
char	**ft_strsplit(char *s, char c);
char	*ft_itoa(int n);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putendl(char *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/* 3. bonus function prototypes */

typedef struct		s_list
{
	void		*content;
	size_t		content_size;
	struct s_list	*next;
}			t_list;

t_list	*ft_lstnew(void	*content, size_t content_size);
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/* 4. personal function prototypes */

typedef struct		s_link
{
	char		*name;
	struct s_link	*next;
}			n_link;

//print_hex
//atoi_base
//split_whitespaces
//print_bits
//swap_bits
//reverse_bits
//wordcount
//charcount

#endif
