
#include "libft.h"
#include "libtest.h"

void	t_isalnum(char a, char b, char c)
{
	char *i;
	char *j;

	i = " is alnum ";
	j = " is not alnum ";

	if (a && b && c) 
		ft_putstr("ft_isalnum: ");
	ft_putchar(a);
	if (ft_isalnum(a))
		ft_putstr(i);
	else
		ft_putstr(j);
	ft_putchar(b);
	if (ft_isalnum(b))
		ft_putstr(i);
	else
		ft_putstr(j);
	ft_putchar(c);
	if (ft_isalnum(c))
		ft_putstr(i);
	else
		ft_putstr(j);
	ft_putstr("\n\n");
}
