
#include "libft.h"
#include "libtest.h"

void	t_isascii(char a, char b, char c)
{
	char *i;
	char *j;

	i = " is ascii ";
	j = " is not ascii ";

	if (a && b && c) 
		ft_putstr("ft_isascii: ");
	ft_putchar(a);
	if (ft_isascii(a))
		ft_putstr(i);
	else
		ft_putstr(j);
	ft_putchar(b);
	if (ft_isascii(b))
		ft_putstr(i);
	else
		ft_putstr(j);
	ft_putchar(c);
	if (ft_isascii(c))
		ft_putstr(i);
	else
		ft_putstr(j);
	ft_putstr("\n\n");
}
