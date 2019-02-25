
#include "libft.h"
#include "libtest.h"

void	t_isdigit(char a, char b, char c)
{
	char *i;
	char *j;

	i = " is digit ";
	j = " is not digit ";

	if (a && b && c)
		ft_putstr("ft_isdigit: ");
	ft_putchar(a);
	if (ft_isdigit(a))
		ft_putstr(i);
	else
		ft_putstr(j);
	ft_putchar(b);
	if (ft_isdigit(b))
		ft_putstr(i);
	else
		ft_putstr(j);
	ft_putchar(c);
	if (ft_isalpha(c))
		ft_putstr(i);
	else
		ft_putstr(j);
	ft_putstr("\n\n");
}
