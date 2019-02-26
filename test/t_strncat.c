
#include "libtest.h"
#include "libft.h"

void	t_strncat(char *s, char *t, size_t n)
{
	if (s && t && n)
		ft_putstr("ft_strncat: ");
	ft_putstr("size(");
	ft_putnbr((int) n);
	ft_putstr(") ");
	ft_putstr(s);
	ft_putstr(" ");
	ft_putstr(t);
	ft_putstr(" ");
	ft_putstr(ft_strncat(s, t, n));
	ft_putstr("\n\n");
}
