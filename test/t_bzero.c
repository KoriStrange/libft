
#include "libtest.h"
#include "libft.h"

void	t_bzero(size_t n)
{
	char a[15];

	ft_bzero(a, n);
	if (n)
		ft_putstr("ft_bzero: ");
	ft_putstr("size(");
	ft_putnbr((int) n);
	ft_putstr(") ");
	ft_putstr("(");
	ft_putstr(a);
	ft_putstr(")");
	ft_putstr("\n\n");
}
