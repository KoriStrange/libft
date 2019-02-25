
#include "libft.h"
#include "libtest.h"

void	t_isprint(char a, char b, char c)
{
	char *i;
	char *j;

	i = " is print ";
	j = " is not print ";

	if (a && b && c) 
		ft_putstr("ft_isprint: ");
	ft_putchar(a);
	if (ft_isprint(a))
		ft_putstr(i);
	else
		ft_putstr(j);
	ft_putchar(b);
	if (ft_isprint(b))
		ft_putstr(i);
	else
		ft_putstr(j);
	ft_putchar(c);
	if (ft_isprint(c))
		ft_putstr(i);
	else
		ft_putstr(j);
	ft_putstr("\n\n");
}
