
#include "libft.h"
#include "libtest.h"

void	t_strncpy(char *s, size_t n)
{
	char a[15] = "hello world";
	char b[15] = "hello peter";

//	a = "hello world1";
//	b = "hello world2";
	strncpy(a, s, n);
	ft_strncpy(b, s, n);
	if (s && n)
		ft_putstr("ft_strncpy: size(");
	ft_putnbr((int) n);
	ft_putstr(") strncpy = ");
	ft_putstr(a);
	ft_putstr(" ft_strncpy = ");
	ft_putstr(b);
	ft_putstr("\n\n");
}
